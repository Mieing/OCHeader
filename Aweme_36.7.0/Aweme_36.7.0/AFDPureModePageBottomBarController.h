@interface AFDPureModePageBottomBarController : AWEBaseController <AFDPureModePageControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomBarElementContainer;
}

- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (void)setHide:(BOOL)a0;
- (void)didBackFromAlbumDetail;
- (void)containerDidUpdateVideoController:(id)a0;
- (void)containerDidPlayOrPause:(BOOL)a0;
- (void)didUpdatePlayerController:(id)a0;
- (void)viewDidAppear;
- (void)becomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setData:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
