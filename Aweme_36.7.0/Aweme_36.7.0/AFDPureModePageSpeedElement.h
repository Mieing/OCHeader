@interface AFDPureModePageSpeedElement : AFDBaseElement <AFDPureModePageControllerProtocol, AFDElementHostLifeCycle> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_speedButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_speedNumArray;
    void /* unknown type, empty encoding */ currentSpeedIdx;
    void /* unknown type, empty encoding */ forbidUpdateSpeedButton;
    void /* unknown type, empty encoding */ forbidUpdateVideoControllerSpeed;
}

- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (void)containerDidUpdateVideoController:(id)a0;
- (void)didUpdatePlayerController:(id)a0;
- (void)host_setData:(id)a0;
- (void)speedButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
