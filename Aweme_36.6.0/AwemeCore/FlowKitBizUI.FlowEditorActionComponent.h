@interface FlowKitBizUI.FlowEditorActionComponent : _TtCs12_SwiftObject <FlowKitBizUI.FlowEditorComponent> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewContainerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workflowService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keyboardService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputData;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eduApi;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modeService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_intentionDetectService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputService;
    void /* unknown type, empty encoding */ rotateViews;
    void /* unknown type, empty encoding */ actionViews;
    void /* unknown type, empty encoding */ hiddenViews;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topRotateButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_drawTitleContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_undoRedoContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topUndoButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topRedoButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topClipButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBeautyButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topDownloadButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_editButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deleteButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputGesture;
    void /* unknown type, empty encoding */ kButtonSize;
    void /* unknown type, empty encoding */ kTopButtonSize;
    void /* unknown type, empty encoding */ isKeyboardShow;
    void /* unknown type, empty encoding */ isVoiceInputShow;
    void /* unknown type, empty encoding */ ignoreClickEvent;
}

- (void)onCloseButtonClicked;
- (void)onEditButtonClicked;
- (void)onDeleteButtonClicked;
- (void)onRedoButtonClicked;
- (void)onUndoButtonClicked;
- (void)onClipButtonClicked;
- (void)onRotateButtonClicked;
- (void)onBeautyButtonClicked;
- (void)onSaveToAlbumButtonClicked;
- (void)onInputButtonClicked;
- (void)onInputButtonLongPressed;
- (id)init;
- (void)viewDidLoad;

@end
