@class GameURLSessionWrapper, YYWKGameWebView, NSMutableDictionary, YYWKGamePkgCachesStastics, NSString, NSLock, WKHTTPCookieStore;

@interface YYWKGameSchemeHandler : NSObject <WKURLSchemeHandler, GameURLSessionWrapperDelegate>

@property (retain, nonatomic) NSLock *networkLock;
@property (weak, nonatomic) YYWKGameWebView *webview;
@property (retain, nonatomic) YYWKGamePkgCachesStastics *pkgStastics;
@property (retain, nonatomic) GameURLSessionWrapper *urlSessionWrapper;
@property (weak, nonatomic) WKHTTPCookieStore *wkCookieStore;
@property (nonatomic) BOOL isGameCenterScene;
@property (retain, nonatomic) NSMutableDictionary *md5ToCertifacateDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)markRequestBegin:(id)a0 webView:(id)a1;
- (BOOL)handleIntercept:(id)a0 urlSchemeTask:(id)a1;
- (id)webViewCookieStore;
- (id)htmlInjectStrBeforeHead;
- (void)didReceiveData:(id)a0 response:(id)a1 urlSchemeTask:(id)a2;
- (void)innerDidReceiveData:(id)a0 response:(id)a1 urlSchemeTask:(id)a2;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
