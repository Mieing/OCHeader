@class NSString;

@interface AWESecurityBridgePluginImpl : NSObject <BDPSecurityBridgePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (BOOL)checkBridgeCallableWithBridgeContext:(id)a0;
- (id)convertFromBDPContext:(id)a0;
- (void)preMatchRulesWithAppID:(id)a0 path:(id)a1;
- (id)bridgeValidateList;
- (id)bridgeFreeList;

@end
