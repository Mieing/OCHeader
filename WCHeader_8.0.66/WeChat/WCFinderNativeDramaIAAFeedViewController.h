@class WCFinderNativeDramaIAAFeedConfigView, WCFinderNativeDramaIAAFeedCountDownTipsView, MMTimer, NSString, WCFinderFeedListView, WCFinderNativeDramaIAAFeedViewModel;
@protocol WCFinderNativeDramaIAAFeedViewControllerDelegate;

@interface WCFinderNativeDramaIAAFeedViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, MMTipsViewControllerDelegate, WCFinderNativeDramaIAAFeedViewModelDelegate>

@property (retain, nonatomic) WCFinderNativeDramaIAAFeedViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) WCFinderNativeDramaIAAFeedCountDownTipsView *countDownTipsView;
@property (retain, nonatomic) WCFinderNativeDramaIAAFeedConfigView *configView;
@property (nonatomic) long long countDown;
@property (nonatomic) BOOL volumeOn;
@property (retain, nonatomic) MMTimer *timer;
@property (weak, nonatomic) id<WCFinderNativeDramaIAAFeedViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (BOOL)shouldHideNavigationBar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_appWillEnterForeground;
- (void)_appDidEnterBackground;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_setupUI;
- (void)_setupFeedListView;
- (void)_startCountDown;
- (void)_countDownTimerTrigger;
- (void)_showNotSatisfiedWarningAlert;
- (void)_showSatisfiedAlert;
- (void)_showAlertWithTitle:(id)a0 cancelStyleText:(id)a1 confirmStyleText:(id)a2;
- (void)_updateCountDownTipsView;
- (void)_updateConfigView;
- (void)_dismissViewController;
- (void)viewModelUnlockStateDidChange:(id)a0;
- (void)viewModelPromotionStateDidChange:(id)a0;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (void)finderFeedListStartMediaPlay;
- (void)finderFeedListVideoMediaIsPause:(BOOL)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)onClickEmptyBackgroundViewToHideTips:(id)a0;
- (void)_continueUnlock;
- (id)_commonParams;
- (void).cxx_destruct;

@end
