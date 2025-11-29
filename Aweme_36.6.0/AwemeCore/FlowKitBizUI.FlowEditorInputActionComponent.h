@interface FlowKitBizUI.FlowEditorInputActionComponent : NSObject <FlowKitBizUI.FlowEditorComponent> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewContainerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workflowService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keyboardService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputData;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modeService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_intentionDetectService;
    void /* unknown type, empty encoding */ heightConstraint;
    void /* unknown type, empty encoding */ bottomConstraint;
    void /* unknown type, empty encoding */ keyboardConstraint;
    void /* unknown type, empty encoding */ isKeyboardShow;
    void /* unknown type, empty encoding */ latestInputType;
    void /* unknown type, empty encoding */ latestInputState;
    void /* unknown type, empty encoding */ gestureView;
}

- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismissKeyboardIfNeeded;

@end
