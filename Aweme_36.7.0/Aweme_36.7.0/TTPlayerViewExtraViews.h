@class TTPlayerDualPictureExtraView, TTPlayerAlpha3DView;

@interface TTPlayerViewExtraViews : NSObject

@property (retain, nonatomic) TTPlayerAlpha3DView *alpha3DView;
@property (retain, nonatomic) TTPlayerDualPictureExtraView *dualPicExtraView;

- (id)getExtraViewForViewType:(long long)a0;
- (void)ttplayerViewWillRelease:(id)a0;
- (void)ttplayerViewDidCreateMetalView:(id)a0 playerView:(id)a1 avWindow:(void *)a2 specialFunctionType:(int)a3;
- (void)ttplayerViewLayoutSubviews:(id)a0 playerView:(id)a1 avWindow:(void *)a2 videoWHRatio:(float)a3;
- (void)genAlpha3DView:(id)a0 playerView:(id)a1 avWindow:(void *)a2;
- (void)genDualPictureView:(id)a0 playerView:(id)a1 avWindow:(void *)a2;
- (void).cxx_destruct;
- (void)setDrawableSize:(struct CGSize { double x0; double x1; })a0;

@end
