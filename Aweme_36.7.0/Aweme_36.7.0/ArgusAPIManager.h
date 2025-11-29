@interface ArgusAPIManager : NSObject

+ (id)createContainerDelegate;
+ (void)updateLynxSignVerifyPublicKeys:(id)a0 feIdType:(long long)a1 updateFrom:(id)a2;
+ (id)createWebDelegate:(id)a0;
+ (id)createLynxDelegate;
+ (id)createGlobalDelegate;

@end
