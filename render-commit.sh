rm render.gif

BIN_PATH=$(find ./bin -type f -path "*.app/Contents/MacOS/*")

if [ -f $BIN_PATH ]; then
  $BIN_PATH&

  pid=$!

  # -t 10 - seconds (duration)
  # -r 10 - fps
  ffmpeg -t 10 -f avfoundation -i "1:0" -r 10 -vf scale=1024:-1 render.gif

  kill $pid

  git add render.gif
fi
