@class KindaProxy, MMIUIPage, NSString;

@interface KindaWebViewUIPage : MMWebViewController <MMIUIPagePlatformFuncDelegate>

@property (retain, nonatomic) KindaProxy *kindProxy;
@property (retain, nonatomic) MMIUIPage *kindaUIPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)closeUI:(BOOL)a0;
- (void)beginIgnoringInteractionEvents;
- (void)endEditing;
- (void)endIgnoringInteractionEvents;
- (void)refreshNavigationBar;
- (void)setBackgroundColor:(id)a0;
- (void)setKeyBoardShowCallbackImpl:(id)a0;
- (void)setTopLeftBackBtnCallbackImpl:(id)a0;
- (void)setTopLeftBtnTitleAndCallbackImpl:(id)a0 callback:(id)a1;
- (void)setTopRightBtnImage:(id)a0;
- (void)setTopRightBtnTitle:(id)a0 color:(id)a1;
- (void)setTopRightCallbackImpl:(id)a0;
- (void)setTopRightBtnBgIsGreen:(BOOL)a0;
- (void)setTopRightBtnDone;
- (id)getTitle;
- (void)setWindowSoftInputAdjustMode:(long long)a0;
- (void)addReportInfo:(id)a0;
- (void)startLoading:(id)a0 block:(BOOL)a1;
- (void)stopLoading;
- (void)triggerReport:(long long)a0 customKey:(id)a1;
- (void)setTitle:(id)a0;
- (void)setSubTitle:(id)a0;
- (void)setBackBtnVisible:(BOOL)a0;
- (void)setSubTitleDefaultColor;
- (void)setSubTitleVisibility:(int)a0;
- (void)setScreenBrightness:(float)a0;
- (void)setScreenKeepOn:(BOOL)a0;
- (void).cxx_destruct;

@end
