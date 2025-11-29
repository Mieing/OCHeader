@class BDImageView, UIView;

@interface AWENewsAISmartFeedTrackRefreshHeaderView : MJRefreshHeader

@property (retain, nonatomic) UIView *willRefreshView;
@property (retain, nonatomic) BDImageView *refreshingImageView;
@property (retain, nonatomic) UIView *endRefreshView;
@property (retain, nonatomic) UIView *endRefreshViewNoData;
@property (nonatomic) long long headerState;

- (void)p_configUI;
- (void)p_makeConstraint;
- (id)p_endRefreshViewWithCount:(id)a0;
- (id)p_createLabelViewWithText:(id)a0;
- (void)endRefreshingWithCount:(id)a0;
- (void)endRefreshingWithNoData;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
