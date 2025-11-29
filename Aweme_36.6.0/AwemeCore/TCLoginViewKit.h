@class NSString, NSDictionary, NSArray, NSDate, NSMutableDictionary;
@protocol TencentLoginDelegate, TCLoginViewDelegate;

@interface TCLoginViewKit : TCWebViewKit <TCWebViewKitDelegate> {
    BOOL _isUseSafari;
    BOOL _isBrowserError;
    BOOL _isUserCancel;
    unsigned int _loginCount;
}

@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *openId;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *encryToken;
@property (copy, nonatomic) NSString *payToken;
@property (copy, nonatomic) NSDictionary *passData;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *redirectURI;
@property (copy, nonatomic, setter=setPermissions:) NSArray *permissions;
@property (weak, nonatomic) id<TCLoginViewDelegate> loginDelegate;
@property (weak, nonatomic) id<TencentLoginDelegate> newloginDelegate;
@property (copy, nonatomic) NSString *serial;
@property (copy, nonatomic) NSString *errorUrl;
@property (retain, nonatomic) NSMutableDictionary *loginDict;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long authMode;
@property (copy, nonatomic) NSString *defaultUin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appEnterBackground:(id)a0;
- (BOOL)openWithExtraParams:(id)a0;
- (id)generateUrlString:(id)a0 params:(id)a1;
- (void)loadReqURL:(id)a0 webTitle:(id)a1 delegate:(id)a2;
- (BOOL)openWithSafariAndExtraParams:(id)a0;
- (id)getOwnBaseUrl;
- (void)openWithUrl:(id)a0 webTitle:(id)a1 delegate:(id)a2;
- (void)doJsFun:(id)a0;
- (BOOL)openWithSafari;
- (void)webViewKit:(id)a0 didFinishedWithError:(id)a1;
- (void)webViewKit:(id)a0 didLoadWithContentError:(id)a1;
- (void)webViewKit:(id)a0 didLoadWithNetworkError:(id)a1;
- (BOOL)webViewKit:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (BOOL)webViewKit:(id)a0 shouldAutorotateToInterfaceOrientation:(long long)a1;
- (unsigned long long)supportedInterfaceOrientationsWithWebkit:(id)a0;
- (BOOL)shouldAutorotateWithWebkit:(id)a0;
- (id)initWithAppId:(id)a0 redirectURI:(id)a1 permissions:(id)a2 loginDelegate:(id)a3;
- (void)openWithAppId:(id)a0 redirectURI:(id)a1 permissions:(id)a2 loginDelegate:(id)a3;
- (BOOL)isNewQQBrowserInstall;
- (BOOL)isOldQQBrowserInstall;
- (BOOL)canHandleOpenURL:(id)a0;
- (void)setAuthorData:(id)a0 redirectURI:(id)a1 permissions:(id)a2;
- (void).cxx_destruct;
- (BOOL)open;
- (id)init;
- (void)clearData;
- (void)cleanUp;
- (id)traceID;
- (void)dealloc;
- (BOOL)handleOpenURL:(id)a0;
- (id)parseURLParams:(id)a0;

@end
