@interface AWEGuardianPlatformService : NSObject

@property (nonatomic) BOOL isChildBindingGuardianPassword;

- (void)updateChildTimeLockStatus:(long long)a0 childUserID:(id)a1 secChildUserID:(id)a2 completion:(id /* block */)a3;
- (void)updateChildTeenModeEnabled:(BOOL)a0 childUserID:(id)a1 secChildUserID:(id)a2 completion:(id /* block */)a3;
- (void)getDynamicPassword:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (void)childBindGuardianPassword:(id)a0 objectID:(id)a1 completion:(id /* block */)a2;

@end
