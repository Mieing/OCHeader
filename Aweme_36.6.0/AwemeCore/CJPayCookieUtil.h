@interface CJPayCookieUtil : NSObject

@property (copy, nonatomic) id /* block */ cookieBlock;

+ (id)sharedUtil;

- (id)cjpayExtraParams;
- (void)cleanCookies;
- (void)setupCookie:(id /* block */)a0;
- (id)getWebCommonScipt:(id)a0;
- (id)_getCookieDic:(id)a0;
- (id)getWKCookieScript:(id)a0;
- (id)getEnvParams;
- (void).cxx_destruct;

@end
