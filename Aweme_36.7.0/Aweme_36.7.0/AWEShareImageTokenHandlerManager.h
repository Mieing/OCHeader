@interface AWEShareImageTokenHandlerManager : NSObject <AWEShareImageTokenHandlerManager>

+ (id)sharedInstance;

- (void)parseActivityToken:(id)a0 carrierType:(long long)a1 sourceFrom:(id)a2 Completion:(id /* block */)a3;
- (void)toastIfNeed:(BOOL)a0;
- (void)transferToWebViewWithSchema:(id)a0 needToast:(BOOL)a1;

@end
