@interface MMIUIModal : NSObject {
    struct Handle<std::shared_ptr<kinda::IUIModal>> { struct shared_ptr<kinda::IUIModal> { struct IUIModal *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

- (id)initWithCpp:(const void *)a0;
- (void)onCreateLayout:(id)a0;
- (void)setFuncDelegate:(id)a0;
- (id)getFuncDelegate;
- (void)setPlatformDelegate:(id)a0;
- (void)keyboardWillShow:(float)a0;
- (void)keyboardWillHide;
- (void)viewDidTransitionToNewSize;
- (void)onModalEnterBackground;
- (void)onModalEnterForeground;
- (void)onDestroy;
- (void)onClickAndroidBack;
- (id)getReportUrl;
- (BOOL)isShowAndroidCenterPadding;
- (id)statusbarColor;
- (id)navigationBarColor;
- (void)onFirstRenderFinish;
- (BOOL)usePanelModalMode;
- (BOOL)useKeyboardCoverMode;
- (BOOL)useImmediateKeyboardAnimation;
- (BOOL)forceShowInLightMode;
- (float)animationCutLinePosition;
- (BOOL)inVisibleOnRecently;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
