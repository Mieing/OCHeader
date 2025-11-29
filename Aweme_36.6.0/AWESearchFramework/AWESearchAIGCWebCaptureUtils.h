@interface AWESearchAIGCWebCaptureUtils : NSObject

+ (void)snapshotsOfWebView:(id)a0 atSegment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 byType:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)searchAIGCPostLongImageTextConfig;
+ (void)captureImageInFrameChangedWebView:(id)a0 atSegment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
+ (void)captureImageInWebViewByScroll:(id)a0 atSegment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
+ (void)performSnapshotInWebView:(id)a0 atSegment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
+ (void)captureImageInWebViewByScroll:(id)a0 atSegment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atOffsetY:(double)a2 completion:(id /* block */)a3;
+ (double)searchAIGCLongImageTextCaptureScreenScrollDelayTime;

@end
