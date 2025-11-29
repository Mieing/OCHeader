@interface AFDPadPureModePageSpeedElement : AFDBaseElement <AFDPureModePageControllerProtocol, AFDElementHostLifeCycle> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_speedButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_speedNumArray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentSpeed;
}

- (void)containerDidUpdateVideoController:(id)a0;
- (void)didUpdatePlayerController:(id)a0;
- (void)containerDidLayoutSubviews;
- (void)host_setData:(id)a0;
- (void)speedButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
