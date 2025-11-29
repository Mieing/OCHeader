@interface AWENetworkToken : NSObject

+ (void)addXTokenForRequest:(id)a0;
+ (void)setXTokenForResponse:(id)a0 request:(id)a1 data:(id)a2 error:(id)a3;
+ (BOOL)shouldAddToken:(id)a0;
+ (void)detectTokenResult:(id)a0 shareCookieList:(id)a1 canAddToken:(BOOL)a2;
+ (BOOL)sessionExpiredWithData:(id)a0;
+ (BOOL)isResponseInSharedCookieHost:(id)a0;
+ (void)p_setXTokenForResponse:(id)a0 request:(id)a1 data:(id)a2 error:(id)a3;
+ (BOOL)sonic_sessionExpiredWithData:(id)a0 optimize:(BOOL)a1;
+ (void)start;
+ (void)setup;
+ (id)currentToken;

@end
