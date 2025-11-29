@interface TTAccountCookie : NSObject

+ (id)cookieForName:(id)a0;
+ (void)clearAllCookies;
+ (void)clearCookieForName:(id)a0;
+ (id)currentCookies;
+ (void)clearAccountSessionAllCookie;
+ (void)clearAccountCookie;
+ (id)sessionIDInCookie;
+ (id)csrfTokenInCookie;
+ (id)domainsForCookieName:(id)a0;
+ (id)cookies;
+ (id)cookiesForURL:(id)a0;

@end
