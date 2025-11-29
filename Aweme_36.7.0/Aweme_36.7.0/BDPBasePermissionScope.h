@class NSString;

@interface BDPBasePermissionScope : NSObject <BDPPermissionScopeEntityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (id)eventName;

@end
