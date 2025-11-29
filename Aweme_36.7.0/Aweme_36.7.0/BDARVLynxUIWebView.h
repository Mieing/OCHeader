@class UITapGestureRecognizer, NSString, WKWebViewLynxGestureRecognizerDelegate, BDARVPayloadData;

@interface BDARVLynxUIWebView : LynxUI <BDARVLynxEmbedViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) WKWebViewLynxGestureRecognizerDelegate *wkWebviewDelegate;
@property (retain, nonatomic) BDARVPayloadData *payloadData;
@property (weak, nonatomic) id oldDelegate;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *preload;
@property (copy, nonatomic) NSString *interceptEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__1640;
+ (id)__lynx_prop_config__1701;
+ (id)__lynx_prop_config__3532;
+ (id)__lynx_prop_config__3623;
+ (id)__lynx_ui_method_config__3694;
+ (id)__lynx_ui_method_config__3805;
+ (id)__lynx_prop_config__3946;
+ (id)__lynx_ui_method_config__4077;
+ (id)__lynx_ui_method_config__4198;

- (void)propsDidUpdate;
- (void)embedViewDidScroll:(id)a0;
- (void)setPreload:(id)a0 requestReset:(BOOL)a1;
- (void)setPosition:(long long)a0 requestReset:(BOOL)a1;
- (void)handelTap:(id)a0;
- (void)setInterceptGesture:(id)a0 requestReset:(BOOL)a1;
- (void)setIsVisibleToUser:(BOOL)a0 requestReset:(BOOL)a1;
- (void)reload:(id)a0 withResult:(id /* block */)a1;
- (void)sendEvent:(id)a0 withResult:(id /* block */)a1;
- (void)setInterceptEvent:(id)a0 requestReset:(BOOL)a1;
- (void)goBack:(id)a0 withResult:(id /* block */)a1;
- (void)canGoBack:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void)dealloc;
- (id)createView;

@end
