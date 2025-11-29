@interface BDWebViewDelegateRegister : NSObject

+ (void)insertIMP2WKSetNavigationDelegate:(void /* function */ *)a0 forCls:(Class)a1;
+ (void)registerWKBlock:(id /* block */)a0 forTime:(long long)a1 forClass:(Class)a2;
+ (void)insertBlock2WKRequestStart:(id /* block */)a0;
+ (void)insertBlock2WKRequestFail:(id /* block */)a0;
+ (void)insertBlock2WKRedirectStart:(id /* block */)a0;
+ (void)insertBlock2WKNavigationStart:(id /* block */)a0;
+ (void)insertBlock2WKResponsePolicy:(id /* block */)a0;
+ (void)insertBlock2WKNavigationFinish:(id /* block */)a0;
+ (void)insertBlock2WKNavigationFail:(id /* block */)a0;
+ (void)startMonitorWithClasses:(id)a0;

@end
