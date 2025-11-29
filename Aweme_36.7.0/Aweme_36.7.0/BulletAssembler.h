@interface BulletAssembler : NSObject

+ (void)setupLocalStorage;
+ (void)setupXBridgeWithConfig:(id)a0;
+ (void)setupResourceLoaderWithConfig:(id)a0;
+ (void)setupGlobalContextWithConfig:(id)a0;
+ (void)bulletInitWithConfig:(id)a0;
+ (void)bindUserInfo;
+ (id)shareInstance;

- (void)registerBridgeProvider:(Class)a0 withBid:(id)a1;
- (void)setup;

@end
