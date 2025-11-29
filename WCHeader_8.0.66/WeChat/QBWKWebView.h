@class NSString, QBWKWebViewProxy;

@interface QBWKWebView : WKWebView {
    QBWKWebViewProxy *_webViewProxy;
    BOOL _isInitialized;
    BOOL _isRemovedFrameInfo;
    BOOL _needInjectJsInNetwork;
    BOOL _isSelfProxyEnabled;
    NSString *_currentUserAgent;
    BOOL _hadAppendQBWebViewFlagToUA;
}

@property (nonatomic) BOOL isULinksEnable;
@property (readonly, copy, nonatomic) NSString *selectedString;

+ (void)initialize;
+ (BOOL)enableWKProzy:(id *)a0;
+ (void)clearProzyMemory;
+ (long long)WKProzyErrorCode;
+ (BOOL)isProzyAvailable;

- (void)doInit;
- (void)qbSetCookie:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)setCustomUserAgent:(id)a0;
- (id)customUserAgent;
- (void)setNavigationDelegate:(id)a0;
- (id)navigationDelegate;
- (void)setUIDelegate:(id)a0;
- (id)UIDelegate;
- (void)addUserScirpt:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2;
- (id)loadRequest:(id)a0;
- (id)standardizationURLString:(id)a0;
- (id)goBack;
- (id)goForward;
- (id)reload;
- (void)dealloc;
- (void)delayRelease;
- (void)destroy;
- (void)removeFrameInfo;
- (void).cxx_destruct;

@end
