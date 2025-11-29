@class AWENewsAISmartFeedTrackLabelView, UIImageView, UIView, BDImageView;

@interface AWENewsAISmartFeedRefreshHeaderView : MJRefreshHeader

@property (retain, nonatomic) UIView *willRefreshView;
@property (retain, nonatomic) BDImageView *refreshingImageView;
@property (retain, nonatomic) UIImageView *starImage;
@property (retain, nonatomic) AWENewsAISmartFeedTrackLabelView *trackLabel;
@property (retain, nonatomic) UIView *endRefreshView;
@property (nonatomic) long long headerState;

- (void)p_configUI;
- (void)p_makeConstraint;
- (void).cxx_destruct;
- (void)endRefreshing;
- (void)prepare;
- (void)setState:(long long)a0;

@end
