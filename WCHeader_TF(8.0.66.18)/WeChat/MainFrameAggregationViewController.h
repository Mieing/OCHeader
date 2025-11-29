@class UIView, MainFrameAggregationTransition, UITapGestureRecognizer, MMUIButton, NSString, UIImageView, MainFrameAggregationLogic, MMUILabel, MMTableView, MainFrameFoldReporter;
@protocol MainFrameAggregationDelegate;

@interface MainFrameAggregationViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MainFrameAggregationLogicDelegate, MainFrameAggregationTransitionDelegate>

@property (weak, nonatomic) id<MainFrameAggregationDelegate> delegate;
@property (retain, nonatomic) MainFrameAggregationLogic *dataLogic;
@property (retain, nonatomic) MainFrameFoldReporter *reporter;
@property (nonatomic) long long reportQuitType;
@property (retain, nonatomic) MainFrameAggregationTransition *transition;
@property (nonatomic) BOOL isTransitioning;
@property (nonatomic) BOOL needReloadAfterTransition;
@property (retain, nonatomic) UITapGestureRecognizer *bgTap;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *tableContainerView;
@property (retain, nonatomic) UIView *tableBgView;
@property (retain, nonatomic) UIImageView *arrowDownImageView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUILabel *emptyLabel;
@property (retain, nonatomic) UIView *bottomContentView;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showSessionAggregationFrom:(id)a0 visibleCells:(id)a1 headerHeight:(double)a2 delegate:(id)a3;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldInteractivePop;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)initUI;
- (void)initBottomView;
- (void)updateLayout;
- (void)viewDidLayoutSubviews;
- (void)updateContent;
- (void)updateBottomTitle;
- (void)onCancelButtonClick:(id)a0;
- (void)onBackgroundViewClick:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onSessionListChange;
- (void)onSessionUnreadChange;
- (BOOL)shouldShowQuickReplyPush:(id)a0;
- (void)onPushTransitionWillBegin;
- (void)onPushTransitionEnd;
- (void)onInteractivePopBegin;
- (id)getViewController;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)mmNavigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)registerYReportSdk;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void).cxx_destruct;

@end
