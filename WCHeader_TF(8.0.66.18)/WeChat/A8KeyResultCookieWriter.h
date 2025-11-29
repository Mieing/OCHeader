@class NSString, NSHTTPCookie, UIView;

@interface A8KeyResultCookieWriter : MMObject {
    NSString *_domain;
    UIView *_webView;
    id /* block */ _block;
    int _waitCookieCount;
    BOOL _hasWriteCompleteMarker;
    NSHTTPCookie *_checkAndRetryCookie;
}

@property (nonatomic) unsigned int a8KeyCookieExpireTime;

- (id)initWithDomain:(id)a0 weakWebView:(id)a1 andCompleteBlock:(id /* block */)a2;
- (void)writeCookieValue:(id)a0 forKey:(id)a1;
- (void)writeCookieValue:(id)a0 forKey:(id)a1 needCheckAndRetry:(BOOL)a2;
- (void)doWriteCookie:(id)a0;
- (void)writeCompleteMarker;
- (void)handleWriteWKCookieComplete:(id)a0;
- (void)handleCheckCookieWrong;
- (void)callCompletedBlock:(BOOL)a0;
- (id)buildHttpCookieWithValue:(id)a0 forKey:(id)a1 httpOnly:(BOOL)a2;
- (void)reportWriteA8KeyCookieWithResult:(BOOL)a0;
- (void).cxx_destruct;

@end
