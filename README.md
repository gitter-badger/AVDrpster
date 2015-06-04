# Drpster
Drpster is a slick, user friendly, video app that take those elegant, 120 slow-motion, videos that you love.

# Vendor 
SVProgressHUD is a clean and easy-to-use HUD meant to display the progress of an ongoing task.

# Future Updates
Currently Drpster is still in the making, but I have a solid video camera API build and plan to make awesome products with it. Look forward for future projects with this API.

# Creators
Created By: Abrupt              

API: shu223 

Vendor: samvermette

# License 
Drpster is herby under the MIT License:

# Start and Stop recording

```
[self.captureManager startRecording];

```
[self.captureManager stopRecording];

```

# Initialize Drpster

```
self.captureManager = [[AVCaptureManager alloc] initWithPreviewView:self.view];
self.captureManager.delegate = self;

```