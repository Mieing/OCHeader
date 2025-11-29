@class NSString, AWESearchKeyboardTabBarContext, UIView;

@interface AWESearchKeyboardBaseElement : NSObject <AWESearchKeyboardElementProtocol>

@property (retain, nonatomic) AWESearchKeyboardTabBarContext *context;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (void)hostVC_setupContext:(id)a0;
- (void)hostVC_updateContext:(id)a0;
- (void)host_elementViewDidSetup;
- (void)host_themeChange:(id)a0;
- (void)host_tabbarHidden:(BOOL)a0;
- (void)host_elementViewUpdateNewUISize:(struct CGSize { double x0; double x1; })a0 leftOffset:(double)a1 hasText:(BOOL)a2 uiInfo:(id)a3;
- (void)hostVC_keyboardWillShow:(id)a0;
- (void)hostVC_keyboardDidShow:(id)a0;
- (void)hostVC_keyboardWillHide:(id)a0;
- (void)hostVC_showMiddleViewController;
- (void)hostVC_showSugViewController;
- (void)hostVC_showResultViewController;
- (void).cxx_destruct;
- (id)init;

@end
