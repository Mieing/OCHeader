@interface AWEShowPlayletAutoPlayController : AWEAwemeFeedBaseController <AWEShowCommunicationRTSControllerProtocol, AWEShowMonetizeRefreshHandler> {
    void /* unknown type, empty encoding */ kPreloadVideoBeforeSeconds;
    void /* unknown type, empty encoding */ adInsertViewModel;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ playContext;
    void /* unknown type, empty encoding */ playManager;
    void /* unknown type, empty encoding */ lastCountDownSecond;
    void /* unknown type, empty encoding */ lastCountDownForButton;
    void /* unknown type, empty encoding */ replaceAwemeListener;
    void /* unknown type, empty encoding */ paySuccessListener;
    void /* unknown type, empty encoding */ insertAdListener;
    void /* unknown type, empty encoding */ adinsertVMListener;
}

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (id)monetizeScene;
- (void)refreshMonetizeContent:(id)a0 reason:(unsigned long long)a1;
- (id)monetizeDataSource;
- (id)currentMonetizeContent;
- (id)monetizeContentTrackParams;
- (id)monetizeContentReferString;
- (void)refresh:(id)a0 willRefreshMonetizeContentForContext:(id)a1;
- (id)fromAdTrafficIsNextBtnClick:(BOOL)a0;
- (id)getWillLoadModel;
- (BOOL)canAutoPlayToNext;
- (void)exitADPageWithReasonAdController:(id)a0;
- (void)playNextPlayletIfEnableWithReasonAdController:(id)a0;
- (void)trackADPageShow;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)stop;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appDidEnterBackground;

@end
