@class UILabel, AWEUILoadingView;

@interface AWELiveRoomRefreshHeader : MJRefreshHeader

@property (retain, nonatomic) UILabel *readyLabel;
@property (retain, nonatomic) UILabel *loadingLabel;
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
