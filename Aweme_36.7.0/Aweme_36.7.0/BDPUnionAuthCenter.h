@class NSString;

@interface BDPUnionAuthCenter : NSObject <BDPPermissionChangeMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareCenter;

- (void)postUnionAuthInfoWithUniqueID:(id)a0 withCompletion:(id /* block */)a1;
- (void)permissionStatusChanged:(id)a0 on:(BOOL)a1 uniqueID:(id)a2;
- (void)tryAuthLocalOpenPlatformScopeWithMicroAppScope:(id)a0 withUniqueID:(id)a1;
- (void)tryRemoveLocalOpenPlatformScopeWithMicroAppScope:(id)a0 withUniqueID:(id)a1;
- (BOOL)checkLocalOpenPlatformScopeWithMicroAppScope:(id)a0 withUniqueID:(id)a1;
- (void)postUnionAuthAuthorizeStatus:(BOOL)a0 uniqueID:(id)a1;
- (void)tryAuthLocalOpenPlatformScope:(id)a0 withUniqueID:(id)a1;
- (id)microAppScopeToOpenPlatformScope:(id)a0;
- (id)getClientKeyFromUniqueID:(id)a0;
- (id)init;

@end
