@interface AFDPureModePagePlayElement : AFDBaseElement <AFDPureModePageControllerProtocol, AFDElementHostLifeCycle> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_playButton;
    void /* unknown type, empty encoding */ lastTrackPlayButtonClickedTime;
}

- (void)didBackFromAlbumDetail;
- (void)containerDidUpdateVideoController:(id)a0;
- (void)containerDidPlayOrPause:(BOOL)a0;
- (void)didUpdatePlayerController:(id)a0;
- (void)host_setData:(id)a0;
- (void)host_viewDidAppear;
- (void)elementContainerDidUpdate;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)playButtonClicked:(id)a0;

@end
