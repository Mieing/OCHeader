@interface MMIUIPage : NSObject {
    struct Handle<std::shared_ptr<kinda::IUIPage>> { struct shared_ptr<kinda::IUIPage> { struct IUIPage *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

+ (id)createAppUipage:(id)a0;

- (id)initWithCpp:(const void *)a0;
- (void)setPlatformFuncDelegate:(id)a0;
- (id)getPlatformFuncDelegate;
- (void)setPlatformDelegate:(id)a0;
- (void)onCreateLayout:(id)a0;
- (void)onCreate;
- (void)onFirstLayoutFinished;
- (void)onDestroy;
- (void)onWillVisible;
- (void)onVisible;
- (void)onInvisible;
- (void)onResume;
- (void)onPause;
- (void)onBack;
- (void)viewDidTransitionToNewSize;
- (id)defaultNavigationBarConfig;
- (id)keyboardTopView;
- (float)keyboardTopViewBottomMargin;
- (void)keyboardWillShow:(float)a0;
- (void)keyboardWillHide;
- (BOOL)fullPageMode;
- (BOOL)useSafeAreaToLayout;
- (BOOL)enableInteractivePop;
- (id)getReportUrl;
- (void)onClickAndroidBack;
- (void)startLoading:(id)a0 block:(BOOL)a1;
- (void)stopLoading;
- (BOOL)forceShowInLightMode;
- (BOOL)inVisibleOnRecently;
- (void)notify:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
