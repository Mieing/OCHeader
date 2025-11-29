@interface FlowKit.VoiceListPagerController : FlowCommon.FlowPageController {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _trackerProvider;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ viewControllers;
    void /* unknown type, empty encoding */ originTabIndex;
    void /* unknown type, empty encoding */ skipScrollTrack;
    void /* unknown type, empty encoding */ handleCreateBot;
    void /* unknown type, empty encoding */ myVocieListVC;
    void /* unknown type, empty encoding */ notUgcPublicVoiceListVC;
    void /* unknown type, empty encoding */ recommendVocieListVC;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ shouldshowBackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterTabList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_naviView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_UGCVoiceButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_createBotButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nullVoiceButton;
}

- (id)flow_trackParametersWith:(id)a0;
- (long long)numberOfControllersInPagerController;
- (id)pagerController:(id)a0 controllerForIndex:(long long)a1 prefetching:(BOOL)a2;
- (void)pagerController:(id)a0 viewDidAppear:(id)a1 forIndex:(long long)a2;
- (void)pagerController:(id)a0 viewDidDisappear:(id)a1 forIndex:(long long)a2;
- (void)pagerControllerDidEndScrolling:(id)a0 animate:(BOOL)a1;
- (void)pagerTabBar:(id)a0 configureLayout:(id)a1;
- (double)pagerTabBar:(id)a0 widthForItemAtIndex:(long long)a1;
- (void)pagerTabBar:(id)a0 didSelectItemAtIndex:(long long)a1;
- (long long)numberOfItemsInPagerTabBar;
- (void)didSelectUGCVoiceButton;
- (void)selectNullVoice;
- (void)didFinishCreateVoice:(id)a0;
- (void)didFinishDeleteVoice:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)back;

@end
