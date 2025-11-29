@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPPermissionScopeCenter : NSObject <BDPWarmBootMessage> {
    NSMutableDictionary *_APIPermissionScopeList;
    NSMutableDictionary *_permissionScopeEntityList;
    NSMutableSet *_allScopes;
    NSRecursiveLock *_APIScopeLock;
    NSRecursiveLock *_scopeEntityLock;
    NSMutableDictionary *_hasShowAlertList;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *showAlertListLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPermissionScopeClass:(Class)a0 scope:(id)a1 type:(long long)a2;
+ (id)getPermissionScopeNameWithAPI:(id)a0 type:(long long)a1;
+ (Class)getPermissionScopeClass:(id)a0 type:(long long)a1;
+ (id)allPermissionScopes;
+ (void)registerAPIPermissionRelation:(id)a0 type:(long long)a1 scope:(id)a2;
+ (id)allNeedRecordPermissionScopes;
+ (BOOL)setAlertHasShowedForUniqueID:(id)a0 scope:(id)a1;
+ (id)sharedCenter;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (id)getPermissionScopeNameWithAPI:(id)a0 type:(long long)a1;
- (Class)getPermissionScopeClass:(id)a0 type:(long long)a1;
- (id)allPermissionScopes;
- (id)allNeedRecordPermissionScopes;
- (void)registerAPIPermissionScope:(id)a0 type:(long long)a1 scope:(id)a2;
- (void)registerPermissionScopeEntity:(Class)a0 scope:(id)a1 type:(long long)a2;
- (BOOL)setAlertHasShowedForUniqueID:(id)a0 scope:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
