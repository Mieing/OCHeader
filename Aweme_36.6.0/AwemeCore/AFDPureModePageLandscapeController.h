@interface AFDPureModePageLandscapeController : AWEBaseController <AFDPureModePageControllerProtocol> {
    void /* unknown type, empty encoding */ isMonitoring;
    void /* unknown type, empty encoding */ entryView;
}

- (void)setHide:(BOOL)a0;
- (void)containerDidScroll:(id)a0;
- (void)entryViewDidTap:(id)a0;
- (void)viewDidAppear;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)orientationChanged:(id)a0;
- (void)setData:(id)a0;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)viewWillDisappear;

@end
