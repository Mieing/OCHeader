@class NSString, BDPUniqueID;
@protocol BDPKVInterface;

@interface BDPPermissionScopeRecorder : NSObject <BDPPermissionScopeRecorderInterface>

@property (retain, nonatomic) id<BDPKVInterface> storage;
@property (retain, nonatomic) id<BDPKVInterface> backStorage;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAuthorizedForScope:(id)a0 uniqueID:(id)a1;

- (id)statusForScope:(id)a0;
- (BOOL)updateScope:(id)a0 approved:(BOOL)a1;
- (id)usedScopesDict;
- (BOOL)deleteScope:(id)a0;
- (void)checkUserSwitch;
- (id)initWithUniqueID:(id)a0 storage:(id)a1;
- (void)updateBackupStorage:(id)a0;
- (void)deleteAllScopes;
- (void).cxx_destruct;

@end
