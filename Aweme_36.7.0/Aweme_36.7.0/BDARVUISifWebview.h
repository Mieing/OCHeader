@class UITapGestureRecognizer, NSString, UIView, BDXWebView, BDARVPayloadData;
@protocol BDXViewContainerProtocol;

@interface BDARVUISifWebview : LynxUI <UIGestureRecognizerDelegate>

@property (retain, nonatomic) BDARVPayloadData *payloadData;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *sifView;
@property (retain, nonatomic) NSString *weburl;
@property (retain, nonatomic) BDXWebView *webview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__891;
+ (id)__lynx_prop_config__540;
+ (id)__lynx_ui_method_config__942;
+ (id)__lynx_ui_method_config__1073;
+ (id)__lynx_ui_method_config__1174;
+ (id)__lynx_prop_config__1255;

- (void)setPreload:(id)a0 requestReset:(BOOL)a1;
- (void)handelTap:(id)a0;
- (void)setInterceptGesture:(id)a0 requestReset:(BOOL)a1;
- (void)setIsVisibleToUser:(BOOL)a0 requestReset:(BOOL)a1;
- (void)reload:(id)a0 withResult:(id /* block */)a1;
- (void)goBack:(id)a0 withResult:(id /* block */)a1;
- (void)canGoBack:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
