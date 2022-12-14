; ---------------------------------------------------------------------------- ;
;                          Configure IdleWebview here                          ;
; ---------------------------------------------------------------------------- ;
[Variables]
; -------------- Change these values to cover all your monitors -------------- ;
WindowX=0
WindowY=0
WindowW=3840
WindowH=1080
; ---------------------------------- Hotkeys --------------------------------- ;
Key=#p
; Hotkey to pause IdleWebview
Key2=#k
; Hotkey to launch Screensaver
; --------------------------------- Settings --------------------------------- ;
TimeOut=5m
; Duration till screensaver shows up (Example: 45s, 3m, 1h)
IgnoreIdleDuration=0
; Should the above setting be ignored, and launch screensaver only with hotkey
LoadedNotif=1
; Should Idlewebview show a notification when loaded

FullScreenCheck=1
; Should Idlewebview pause if the active window is fullscreen

Location=1
; Monitor index of screensaver
Background=18,18,18,185
; rgba, opacity 0-255. This is the base color and is independent from your HTML file
Blur=Acrylic
; Background blur using Window's blurring technique (None, Blur, Acrylic)

URL=file:///#ROOTCONFIGPATH#Launch\Styles\Default\index.html
; URL to website or local file