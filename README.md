# Idle Webview
Use a URL to website or local files to display contents in a custom screensaver. Compatible with multiple displays.
I created this project since I've just started learning about web-development, and thought it would be cool to have animations show up when my desktop is idle 😄!

## ✅ Installation

### Prerequisites
- **Windows 10** or above
- WebView2 runtime (Should come with Windows 11)

### Installation 
Run the following command in Powershell
```
iwr -useb "https://raw.githubusercontent.com/EnhancedJax/IdleWebview/master/Installer.ps1" | iex
```

This will install Idle Webview along with [Rainmeter](https://github.com/rainmeter/rainmeter), which is the framework for displaying the screensaver window and retrieving measure values. 
By default, everything would activate and load on device startup.
<br />
<br />

## 🛠️ Configuration
> The main folder is located at `%appdata%\Rainmeter\JaxCore\InstalledModules\IdleWebview`. 

> The config file is located at `%appdata%\Rainmeter\JaxCore\InstalledModules\IdleWebview\@Resources\Vars.inc`. 
* After installation, it will show a `.inc` file where you can edit the settings. 
* Idle Webview is also automatically activated and can be activated via `Win + K` or the default `5m` idle duration. These can all be changed in the settings.
* After editing the settings, click on the `Refresh.lnk` file in the main folder to apply the settings.
* The style folder can be found at `%appdata%\Rainmeter\JaxCore\InstalledModules\IdleWebview\Launch\Styles\<style_name>`, however you can change the `URL` to anything, local or external.
* 🐛F or Javascript, it's intended to be able to retrieve measure information from the Rainmeter interface, however it seems to be broken right now. Hopefully it would be fixed soon.

## Contribution
Wether or not you're a seasoned web-dev or you're new to this, feel free to create a custom style and create a pull request! 

## Need assistance?
* Join the [CoreCommunity Discord Server](https://discord.gg/JmgehPSDD6) for help
* or [Create an issue](https://github.com/Jax-Core/IdleWebview)

## Credits
This is made possible thanks to [@khanhas](https://github.com/khanhas)'s WebView plugin!

---

<p align="center">
<i>Made with ❤️ by Jax</i>
   <br/><br/>
   <img src="https://raw.githubusercontent.com/Jax-Core/ReadME-Template/main/Resources/Assets/Logo.png"  width="32" height="32"/>
</p><!-- END Footer.mustache -->