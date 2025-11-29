@class NSMutableArray;

@interface GTMSessionCookieStorage : NSHTTPCookieStorage {
    NSMutableArray *_cookies;
    unsigned long long _policy;
}

+ (BOOL)hasCookieExpired:(id)a0;

- (void)internalSetCookie:(id)a0;
- (id)cookieMatchingCookie:(id)a0;
- (void)removeExpiredCookies;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllCookies;
- (id)cookies;
- (void)setCookies:(id)a0;
- (void)setCookie:(id)a0;
- (void)setCookies:(id)a0 forURL:(id)a1 mainDocumentURL:(id)a2;
- (void)storeCookies:(id)a0 forTask:(id)a1;
- (id)cookiesForURL:(id)a0;
- (void)getCookiesForTask:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCookie:(id)a0;
- (void)setCookieAcceptPolicy:(unsigned long long)a0;
- (unsigned long long)cookieAcceptPolicy;

@end
