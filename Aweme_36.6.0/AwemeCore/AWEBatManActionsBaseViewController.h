@class UIView, AWEBatManActionsTrialTimeView, UITapGestureRecognizer, NSString, AWEBatManActionsViewModel, UICollectionView, AWEBatManActionsMenuHeaderView, UILabel;
@protocol XPlayBusinessConfigProtocol, XPlayItemProtocol, AWEBatManActionsViewControllerDelegate;

@interface AWEBatManActionsBaseViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEBatManActionsMenuHeaderViewDelegate, AWEBatManActionsTrialTimeViewDelegate, UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWEBatManActionsViewModel *viewModel;
@property (weak, nonatomic) AWEBatManActionsMenuHeaderView *headerView;
@property (weak, nonatomic) AWEBatManActionsTrialTimeView *trialTimeView;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UILabel *feedbackLbl;
@property (weak, nonatomic) UILabel *downloadLabel;
@property (weak, nonatomic) UIView *downloadView;
@property (weak, nonatomic) UIView *exitView;
@property (weak, nonatomic) UIView *maskRootView;
@property (nonatomic) BOOL isShowingDownloadView;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissGes;
@property (weak, nonatomic) id<XPlayItemProtocol> playItem;
@property (weak, nonatomic) id<AWEBatManActionsViewControllerDelegate> delegate;
@property (retain, nonatomic) id<XPlayBusinessConfigProtocol> xplayBusinessConfig;
@property (nonatomic) BOOL isShowGuide;
@property (nonatomic) BOOL canJumpToStore;
@property (nonatomic) double center_x;
@property (nonatomic) double center_y;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) int orientationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)dismissMaskView;
- (void)showNewUserGuideWithIndex:(unsigned long long)a0;
- (void)showMaskViewWithRowIndex:(unsigned long long)a0 content:(id)a1 onIKnowClick:(id /* block */)a2;
- (void)showExitView;
- (BOOL)isShowNewUserBenefitsIcon;
- (void)onDownloadClicked;
- (void)onVipButtonClicked;
- (void)onBenefitsButtonClicked;
- (void)onIncreaseTrialTimeButtonClicked;
- (void)onLoginButtonClicked;
- (void)updateTrialTime:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithCompletion:(id /* block */)a0;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didTapView;

@end
