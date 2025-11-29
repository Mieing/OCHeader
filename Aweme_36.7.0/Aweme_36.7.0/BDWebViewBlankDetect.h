@interface BDWebViewBlankDetect : NSObject

+ (void)addBlankDetectMonitorListener:(id)a0;
+ (void)detectBlankByNewSnapshotWithWKWebView:(id)a0 needNonBlankRatio:(BOOL)a1 CompleteBlockV2:(id /* block */)a2;
+ (void)detectBlankByNewSnapshotWithWKWebView:(id)a0 afterScreenUpdates:(BOOL)a1 needNonBlankRatio:(BOOL)a2 CompleteBlockV2:(id /* block */)a3;
+ (void)detectBlankByNewSnapshotWithWKWebView:(id)a0 CompleteBlock:(id /* block */)a1;
+ (void)detectBlankByOldSnapshotWithView:(id)a0 CompleteBlock:(id /* block */)a1;

@end
