@interface AWELandscapeBackgroundManager : NSObject

+ (BOOL)isRealLandscapeVideo:(id)a0;
+ (BOOL)enableGaussianBlurView:(id)a0;
+ (BOOL)enableSmartColorView:(id)a0;
+ (id)sharedManager;

- (id)smartBackgroundColorWithModel:(id)a0 type:(unsigned long long)a1;
- (id)disableSmartColorAwemeIDs;
- (id)getFirstRenderImageWithModel:(id)a0;
- (BOOL)enableSmallPicCheck;
- (id)smartBackgroundColorWithModel:(id)a0;
- (id)getVisualEffectView;
- (id)gaussianBlurBackgroundViewWithModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)smartColorBackgroundViewWithModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)adVideoPlayerBackgroundView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)normalVideoPlayerBackgroundView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)playerBackgroundView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
