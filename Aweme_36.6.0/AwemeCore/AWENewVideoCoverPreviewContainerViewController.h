@class AWESlidingViewController, UIView, NSArray, AWEAwemeModel, AWENewVideoCoverPreviewSingleViewController, NSString, AWESlidingTabbarView, AWENewVideoCoverPreviewDoubleViewController, ACCButton;
@protocol AWENewVideoCoverPreviewContainerViewControllerDelegate;

@interface AWENewVideoCoverPreviewContainerViewController : UIViewController <AWESlidingViewControllerDelegate>

@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWENewVideoCoverPreviewSingleViewController *singleViewController;
@property (retain, nonatomic) AWENewVideoCoverPreviewDoubleViewController *doubleViewController;
@property (retain, nonatomic) UIView *backButton;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) ACCButton *editButton;
@property (retain, nonatomic) ACCButton *saveButton;
@property (retain, nonatomic) NSArray *titlesArray;
@property (retain, nonatomic) AWEAwemeModel *pubulishModel;
@property (weak, nonatomic) id<AWENewVideoCoverPreviewContainerViewControllerDelegate> delegate;
@property (nonatomic) long long initialIndex;
@property (nonatomic) BOOL saveBtnToApply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)backBtnClicked;
- (void)configureUI;
- (void)configNavigationBar;
- (BOOL)leftEdgePan:(id)a0;
- (double)tabViewWidth;
- (id)initWithCoverImage:(id)a0 title:(id)a1 caption:(id)a2;
- (void)saveBtnClicked;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
