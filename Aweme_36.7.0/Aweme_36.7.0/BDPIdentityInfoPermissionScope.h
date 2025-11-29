@class NSDictionary, BDPPermissionScopeContextInfo;

@interface BDPIdentityInfoPermissionScope : BDPBasePermissionScope

@property (retain, nonatomic) BDPPermissionScopeContextInfo *contextInfo;
@property (copy, nonatomic) NSDictionary *identityInfoDict;

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (long long)freeType;
- (id)title:(id)a0;
- (unsigned long long)privacyScopeEnumName:(id)a0;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)a0;
- (id)brief:(id)a0;
- (id)briefDesc:(id)a0;
- (id)desc:(id)a0;
- (void)forceRequestPermission:(id)a0 completion:(id /* block */)a1;
- (void)footerView:(id)a0 completion:(id /* block */)a1;
- (void)contentView:(id)a0 completion:(id /* block */)a1;
- (void)buttonView:(id)a0 completion:(id /* block */)a1;
- (void)preCheck:(id)a0 completion:(id /* block */)a1;
- (void)beforeAcquirePermission:(id)a0;
- (void)handleCustomConfirmAction:(id)a0 completion:(id /* block */)a1;
- (void)clearLastInfos;
- (void)requestWithType:(long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)handleCustomErrorWithJsonObj:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)eventName;

@end
