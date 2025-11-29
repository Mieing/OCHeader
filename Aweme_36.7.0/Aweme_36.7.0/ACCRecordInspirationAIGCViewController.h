@class ACCAnimatedButton, AWEVideoPublishViewModel, ACCBaseSlidingTabViewController;

@interface ACCRecordInspirationAIGCViewController : UIViewController

@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) ACCBaseSlidingTabViewController *slidingTabViewController;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ aigcClickBlock;
@property (copy, nonatomic) id /* block */ createNewEffectClickBlock;

- (void)closeButtonClick;
- (void)createSubview;
- (void)createLayoutSubview;
- (void)createCategoryView;
- (id)createHistoryViewController;
- (id)createAIGCViewController;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)dealloc;

@end
