@class UIViewController;
@protocol AWEFeedUserRecommendListViewControllerProtocol;

@interface AWEFeedRecommendUserListCellViewController : AWEFeedCellViewController

@property (retain, nonatomic) UIViewController<AWEFeedUserRecommendListViewControllerProtocol> *recommendViewController;
@property (nonatomic) long long cardType;

- (void)excuteCustomDisplay;
- (void)handleEnterPrivacySetting;
- (void)handleExitPrivacySetting;
- (BOOL)p_isVCVisibleAndHasMusic;
- (id)initWithCellReuseIdentifier:(id)a0;
- (BOOL)rootViewTapGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
