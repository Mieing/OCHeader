@class BDXThreadSafeArray;

@interface AnnieWebViewInterceptor : NSObject

@property (retain, nonatomic) BDXThreadSafeArray *handlerArray;

+ (void)registerWebViewInterceptor:(id)a0;
+ (id)webview:(id)a0 handleURLIfNeeded:(id)a1;
+ (void)unregiserWebViewInterceptor:(id)a0;
+ (id)sharedInstance;

- (void)registerInterceptor:(id)a0;
- (void)unregiserInterceptor:(id)a0;
- (id)webview:(id)a0 handleURLIfNeeded:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
