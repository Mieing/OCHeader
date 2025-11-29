@class NSString, BDPUniqueID, NSMutableDictionary;
@protocol BDPKVInterface;

@interface BDPPermissionScopeRecorder_HG : NSObject <BDPPermissionScopeRecorderInterface>

@property (retain, nonatomic) id<BDPKVInterface> storage;
@property (retain, nonatomic) id<BDPKVInterface> backupStorage;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *permissionCache;
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
- (BOOL)updateScopeCache:(id)a0 approved:(BOOL)a1;
- (void).cxx_destruct;

@end
