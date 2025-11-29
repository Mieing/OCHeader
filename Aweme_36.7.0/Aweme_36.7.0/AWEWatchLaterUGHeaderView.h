@class AWEWatchLaterDiversionInfo, UIImageView, UILabel, UIView;
@protocol AWEDouyinSelectBrandTrackerProtocol, AWEWatchLaterUGHeaderViewDelegate;

@interface AWEWatchLaterUGHeaderView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *leftJXIconView;
@property (retain, nonatomic) UILabel *ugLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) UIImageView *closeIconView;
@property (retain, nonatomic) AWEWatchLaterDiversionInfo *watchLaterDivisionInfo;
@property (retain, nonatomic) id<AWEDouyinSelectBrandTrackerProtocol> douyinSelectBrandTracker;
@property (weak, nonatomic) id<AWEWatchLaterUGHeaderViewDelegate> delegate;

- (void)viewControllerDidAppear;
- (void)initDouyinSelectBrandTrackerManager;
- (void)trackerUGHeaderViewClickAction;
- (void)setDivisionInfo:(id)a0;
- (void)trackerUGHeaderViewShowAction;
- (void)viewControllerDidDisAppear:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)updateHeaderView;

@end
