@interface FlowKitBizUI.FlowRecorderActionComponent : _TtCs12_SwiftObject <FlowKitBizUI.FlowRecorderComponent> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewContainerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workFlowService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modeService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_context;
    void /* unknown type, empty encoding */ captureTimeoutTimer;
    void /* unknown type, empty encoding */ throttler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ impactFeedbackGenerator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_recordButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flipButton;
    void /* unknown type, empty encoding */ kButtonSize;
    void /* unknown type, empty encoding */ rotateViews;
    void /* unknown type, empty encoding */ lastDeviceOrientation;
}

- (void)onCloseButtonClicked;
- (void)onRecordButtonClicked;
- (void)onAlbumButtonClicked;
- (void)onFlipButtonClicked;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
