@interface LarkSSO.LarkSSO : NSObject {
    void /* unknown type, empty encoding */ apps;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ showViewController;
    void /* unknown type, empty encoding */ currentRequest;
    void /* unknown type, empty encoding */ logInfo;
    void /* unknown type, empty encoding */ lang;
    void /* unknown type, empty encoding */ window;
}

+ (void)registerWithApps:(id)a0;
+ (id)setupLog;
+ (id)setupLogWithDid:(id)a0;
+ (void)sendWithRequest:(id)a0 viewController:(id)a1 delegate:(id)a2;
+ (void)setupLang:(id)a0;
+ (BOOL)handleURL:(id)a0;
+ (id)sdkVersion;

- (void).cxx_destruct;
- (id)init;

@end
