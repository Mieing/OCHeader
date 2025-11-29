@interface AFDPureModePageChapterProgressController : AWEBaseController <AWEPadUIAdaptionViewTransitionObserver, AFDPureModePageControllerProtocol> {
    void /* unknown type, empty encoding */ _chapterProgressBar;
    void /* unknown type, empty encoding */ model;
}

- (void)setHide:(BOOL)a0;
- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)didUpdatePlayerController:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (void)dealloc;

@end
