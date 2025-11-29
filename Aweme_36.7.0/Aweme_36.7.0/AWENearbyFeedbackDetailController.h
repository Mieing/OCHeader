@class YYLabel, AWENearbyFeedbackTopBar, AWENearbyFeedbackItemDetail;

@interface AWENearbyFeedbackDetailController : UIViewController

@property (retain, nonatomic) YYLabel *detailTextLabel;
@property (retain, nonatomic) AWENearbyFeedbackTopBar *topBar;
@property (retain, nonatomic) AWENearbyFeedbackItemDetail *detailInfo;
@property (copy, nonatomic) id /* block */ closeActionBlock;

- (void)configViews;
- (void)configTopBar;
- (void)onTapRightButton:(id)a0;
- (void)onTapLeftButton:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
