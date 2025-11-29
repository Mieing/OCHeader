@interface BDPAPIPermissionAuthorizer : NSObject

+ (void)APITryGettingPermissionWithMethod:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (BOOL)checkBridgeInValidateAndFreeListWithMethod:(id)a0 uniqueID:(id)a1;
+ (id)authList;
+ (BOOL)checkPluginBridgeWithMethod:(id)a0;
+ (BOOL)checkBridgeCallableWithMethod:(id)a0 uniqueID:(id)a1;
+ (id)dynamicPluginAuthList;
+ (void)APITryGettingPermission:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;

@end
