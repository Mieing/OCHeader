@class DUXLoadingParticleView, UIView;

@interface AWELiveShelfHeaderLoadingView : MJRefreshHeader

@property (weak, nonatomic) DUXLoadingParticleView *loading;
@property (weak, nonatomic) UIView *parentView;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) BOOL disableLoadingLayoutAnimation;

+ (id)headerWithRefreshingBlock:(id /* block */)a0 backgroundColor:(id)a1;
+ (id)headerWithRefreshingBlock:(id /* block */)a0 backgroundColor:(id)a1 parentView:(id)a2 position:(struct CGPoint { double x0; double x1; })a3;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)setPullingPercent:(double)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
