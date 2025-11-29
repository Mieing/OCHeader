@interface AmoebaSentinelUtils : NSObject

+ (id)screenshotOfView:(id)a0;
+ (id)legacyScreenshotOfView:(id)a0;
+ (id)captureScreen;
+ (id)captureLongScreenshotOfScrollView:(id)a0;
+ (id)captureWithoutStatusBarInView:(id)a0;
+ (void)captureWebView:(id)a0 completion:(id /* block */)a1;
+ (id)captureScreenNodeInfos:(id)a0;
+ (long long)calcNodeCount:(id)a0;
+ (id)captureViewNodeInfo:(id)a0 deep:(long long)a1 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getViewExposeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isInOther:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)safelyGetKeyWindow;
+ (id)compressedImage:(id)a0 quality:(double)a1;

@end
