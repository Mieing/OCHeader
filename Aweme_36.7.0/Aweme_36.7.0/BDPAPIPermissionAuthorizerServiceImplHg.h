@class NSString;

@interface BDPAPIPermissionAuthorizerServiceImplHg : NSObject <BDPAPIPermissionAuthorizerServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)APITryGettingPermissionWithMethod:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;

@end
