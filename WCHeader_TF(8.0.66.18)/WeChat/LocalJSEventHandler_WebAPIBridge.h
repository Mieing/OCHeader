@class WebviewJSEventHandlerBase, NSString, NSMutableDictionary, WebViewA8KeyLogicImpl, WebViewJSLogicImpl, UIView;
@protocol WXCustomWebViewControllerDelegate, YYWebViewInterface;

@interface LocalJSEventHandler_WebAPIBridge : LocalJSEventHandler_BaseEvent <WebviewJSEventHandlerBaseDelegate, WXCustomWebViewControllerProtocol, JSEventHandler, LocalJSEventHandlerWebAPIBridgeEventDelegate>

@property (retain, nonatomic) WebviewJSEventHandlerBase *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *m_initUrl;
@property (retain, nonatomic) NSMutableDictionary *m_extraInfo;
@property (readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
@property (readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl;
@property (readonly, nonatomic) BOOL m_bOfflinePage;
@property (retain, nonatomic) UIView<YYWebViewInterface> *webView;
@property (nonatomic) BOOL m_bIsJsapiUploadVideoUploading;
@property (weak, nonatomic) id<WXCustomWebViewControllerDelegate> m_delegate;

+ (BOOL)CanHandlerEvent:(id)a0;

- (id)initWithEvent:(id)a0 context:(id)a1;
- (void)handleJSEvent:(id)a0;
- (id)JSAPIName;
- (id)debugModuleName;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)mmWebViewController;
- (id)webviewController;
- (id)getInitUrl;
- (BOOL)allowFayByImage;
- (BOOL)allowImagePreview;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (void)doJsApiInitEvent;
- (void)enableWebContentImageLongPressingTag;
- (id)extraInfo;
- (void)forceShowCloseButton;
- (id)getCurrentAppId;
- (unsigned int)getCurrentScene;
- (id)getCurrentUrl;
- (unsigned char)getPermissionWithName:(id)a0;
- (id)getShareUrl;
- (void)sendEventToJSBridge:(id)a0 Param:(id)a1;
- (void)setDisableWebAlertView:(BOOL)a0;
- (void)startupPreVerifyJSAPI:(id)a0 failHandleBlock:(id /* block */)a1;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)a0 withResult:(id)a1;
- (void).cxx_destruct;

@end
