@class NSString;

@interface BDPPermissionScopeRecorderServiceImpl : NSObject <BDPPermissionScopeRecorderServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (id)getScopeRecorderWithUniqueID:(id)a0 needCreate:(BOOL)a1;

@end
