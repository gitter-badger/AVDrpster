# Drpster
Drpster is a slick, user friendly, video app that take those elegant, 120 slow-motion, videos that you love.

![](https://is1-ssl.mzstatic.com/image/thumb/Purple1/v4/5a/6b/a3/5a6ba3dc-6460-c93d-22d2-791e44bf1776/pr_source.png/500x500bb-80.png)

![](https://is1-ssl.mzstatic.com/image/thumb/Purple1/v4/93/20/b2/9320b2f7-0a7a-7f7c-6c57-47ba75af1d6b/pr_source.png/500x500bb-80.png)

# Vendor 
SVProgressHUD is a clean and easy-to-use HUD meant to display the progress of an ongoing task.

# Future Updates
Currently Drpster is still in the making, but I have a solid video camera API build and plan to make awesome products with it. Look forward for future projects with this API.

### Creators
Created By: Abrupt              

API: shu223 

Vendor: samvermette

### License 
Drpster is herby under the MIT License: [http://opensource.org/licenses/MIT]

### Start recording

````
[self.captureManager startRecording];
[self.captureManager stopRecording];
````

### Initialize

````
self.captureManager = [[AVCaptureManager alloc] initWithPreviewView:self.view];
self.captureManager.delegate = self;
````
