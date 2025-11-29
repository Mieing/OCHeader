@class NSString, WXWebViewController, SendAuthReq;
@protocol WXApiDelegate;

@interface WapAuthHandler : NSObject <WXWebViewControllerDelegate> {
    WXWebViewController *_webViewController;
    NSString *_appId;
    unsigned long long _timeStamp;
    SendAuthReq *_sendAuthReq;
    BOOL _running;
}

@property (weak, nonatomic) id<WXApiDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareWapAuthHandlerInstance;

- (void)cancelWapOAuth;
- (BOOL)endWapAuth;
- (id)getWebViewController;
- (id)getMobileCheckUrl;
- (void)onHiddenLeftBar;
- (void)onShowLeftBar;
- (void)onCancelOAuthWebView;
- (BOOL)handleWapOAuthOpenUrl:(id)a0;
- (BOOL)beginWapAuth:(id)a0 currentVC:(id)a1 appId:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (id)parseURLParams:(id)a0;

@end
