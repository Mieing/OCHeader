@interface WCFinderVideoPlayerHelper : NSObject

+ (void)updatePlayerPreloadInfo:(id)a0 playerView:(id)a1;
+ (void)createPlayerViewWithFeedContentVM:(id)a0 size:(struct CGSize { double x0; double x1; })a1 controllerGenerator:(id /* block */)a2 playerView:(id *)a3;
+ (void)createPlayerViewWithFeedContentVM:(id)a0 size:(struct CGSize { double x0; double x1; })a1 controller:(id)a2 playerView:(id *)a3;
+ (double)CalculateVideoDisplayFrame:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 isSubScene:(BOOL)a2;
+ (id)playerArgTid:(id)a0;

@end
