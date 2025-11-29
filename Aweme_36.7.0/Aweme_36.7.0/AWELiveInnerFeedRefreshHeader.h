@class UILabel, AWEUILoadingView;

@interface AWELiveInnerFeedRefreshHeader : MJRefreshHeader

@property (retain, nonatomic) UILabel *readyLabel;
@property (retain, nonatomic) UILabel *refreshingLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)setPullingPercent:(double)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
