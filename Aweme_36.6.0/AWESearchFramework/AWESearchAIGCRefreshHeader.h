@class UIView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWESearchAIGCRefreshHeader : MJRefreshHeader

@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *loading;
@property (nonatomic) long long customState;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)setPullingPercent:(double)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void).cxx_destruct;
- (long long)state;
- (void)prepare;
- (void)setState:(long long)a0;

@end
