# HCTools 
==

## 使用CocoaPods集成<br>
---
### 1.$ gem install cocoapods<br>

### 2.为了把HCTools集成到你的项目中,你的Podfile要进行如下设定:<br>
platform :ios, '8.0'

target 'TargetName' do
pod 'HCTools',
end

### 3.然后在终端运行如下命令<br>
$ pod install
