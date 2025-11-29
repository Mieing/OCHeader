@interface CJWebViewHelper : NSObject

+ (BOOL)isInShowErrorViewDomains:(id)a0;
+ (BOOL)injectSecLinkTO:(id)a0 withScene:(id)a1 withOriginalUrl:(id)a2;
+ (BOOL)isBlankWeb:(id)a0;
+ (void)secLinkGoBackFrom:(id)a0 reachEndBlock:(id /* block */)a1;
+ (id)buildWebView:(id)a0 httpMethod:(id)a1;
+ (id)buildWebView:(id)a0;
+ (id)buildWebviewConfig:(id)a0 httpMethod:(id)a1;
+ (BOOL)isInExcludeDomains:(id)a0;
+ (void)initPlugin;

@end
