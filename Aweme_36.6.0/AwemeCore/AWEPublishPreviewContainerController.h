@class UIView, AWEAwemeModel, NSArray, AWEPublishPreviewDoubleColumnController, NSString, AWEPublishPreviewSingleColumnController, AWESlidingTabbarView, UIButton, AWEStudioComposerPublishBasicFeature, UIViewController, AWEPublishPreviewConfig, AWESlidingViewController;

@interface AWEPublishPreviewContainerController : UIViewController <UIGestureRecognizerDelegate, AWEStudioTransitionPreviewerToPublisherContextProvider, AWESlidingViewControllerDelegate>

@property (retain, nonatomic) AWEPublishPreviewConfig *config;
@property (retain, nonatomic) UIButton *publishButton;
@property (retain, nonatomic) UIButton *chooseCoverButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic) BOOL isBackButtonClick;
@property (nonatomic) BOOL isPublishButtonClick;
@property (copy, nonatomic) id /* block */ publishDidClickBlock;
@property (retain, nonatomic) NSArray *titlesArray;
@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWEPublishPreviewSingleColumnController *singlePreviewController;
@property (retain, nonatomic) AWEPublishPreviewDoubleColumnController *doublePreviewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ chooseCoverDidClickedBlock;
@property (weak, nonatomic) UIViewController *presentationOwner;
@property (nonatomic) BOOL saveCover;
@property (retain, nonatomic) AWEStudioComposerPublishBasicFeature *basicFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)configViews;
- (void)slidingViewControllerDidScroll:(id)a0 isFigureDragging:(BOOL)a1;
- (double)tabViewWidth;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (id)previewShowTypeTrack;
- (void)publishButtonClicked:(id)a0;
- (void)setThemeColorWithIsFigureDragging:(BOOL)a0;
- (void)setTabViewThemeColor;
- (void)setBackButtonThemeImage;
- (void)setViewThemeColor;
- (void)setBottomThemeColorWithIsFigureDragging:(BOOL)a0;
- (id)interpolateFromColor:(id)a0 toColor:(id)a1 progress:(double)a2;
- (void)p_trackQuitEvent;
- (void)trackEventChangeVideoPreviewTab;
- (BOOL)isCFFromSocialCamera;
- (void)configPublishButtonIconWithArrowGroup:(id)a0;
- (void)chooseButtonClicked:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)addViews;

@end
