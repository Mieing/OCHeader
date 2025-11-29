@class NSString;

@interface BDXBridgeLazyRegisterLoader : NSObject <TTBridgeInterceptor, BDXBridgeMethodLazyRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bdx_engineReady;
+ (BOOL)bridgeEngine:(id)a0 shouldCallbackUnregisteredCommand:(id)a1;
+ (BOOL)tryRegisterWithMethodName:(id)a0;
+ (BOOL)_lazyRegisterBridgeWithName:(id)a0;
+ (id)bcaaSectionInfo;


@end
