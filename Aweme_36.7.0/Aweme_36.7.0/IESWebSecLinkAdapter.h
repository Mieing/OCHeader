@interface IESWebSecLinkAdapter : NSObject

+ (id)normalizedScene:(id)a0;
+ (void)secureWebView:(id)a0 withScene:(id)a1;
+ (void)secureWebView:(id)a0 withScene:(id)a1 strictMode:(BOOL)a2;
+ (void)setupWithSettings:(Class)a0;
+ (void)secureWebView:(id)a0 forRequest:(id)a1;
+ (BOOL)enabled;

@end
