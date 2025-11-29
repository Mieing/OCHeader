@interface FlowKitBizUI.FlowRecorderEduActionComponent : _TtCs12_SwiftObject <FlowKitBizUI.FlowRecorderComponent> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewContainerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workflowService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modeService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ needTorchModes;
    void /* unknown type, empty encoding */ kButtonSize;
    void /* unknown type, empty encoding */ kTopButtonSize;
    void /* unknown type, empty encoding */ lightTorchOn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topLowBrightnessContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topLowBrightnessTipsLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topLowBrightnessArrowRight;
    void /* unknown type, empty encoding */ flashState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topTorchButton;
    void /* unknown type, empty encoding */ isLowBrightness;
    void /* unknown type, empty encoding */ animationCount;
}

- (void)cameraSourceChangedNotification:(id)a0;
- (void)onLightTorchButtonClicked;
- (void)onBackToRecorder;
- (id)init;
- (void)viewDidLoad;

@end
