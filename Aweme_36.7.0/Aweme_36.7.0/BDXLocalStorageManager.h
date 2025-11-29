@class NSString, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, BDXLocalStorageProtocol;

@interface BDXLocalStorageManager : NSObject

@property (retain, nonatomic) NSUserDefaults *defaultDomainUserDefaults;
@property (copy, nonatomic) NSString *defaultDomain;
@property (retain, nonatomic) NSHashTable *clearServiceTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) id<BDXLocalStorageProtocol> localStorageService;

+ (id)safeObjectByRemoveNullValues:(id)a0;
+ (double)currentTime;
+ (id)shareInstance;

- (id)defaultDomainAllKeys;
- (void)removeDefaultDomainObjectForKey:(id)a0;
- (void)setDefaultDomainObject:(id)a0 forKey:(id)a1;
- (id)defaultDomainObjectForKey:(id)a0;
- (void)removeUserDomainObjectForAppId:(id)a0 key:(id)a1 completion:(id /* block */)a2;
- (id)syncFetchObjectUserDomainForAppId:(id)a0 keys:(id)a1;
- (void)triggerClearLocalStorageWithKeys:(id)a0;
- (void)allUserDomainKeysForAppId:(id)a0 completion:(id /* block */)a1;
- (void)userDomainObjectForAppId:(id)a0 key:(id)a1 completion:(id /* block */)a2;
- (void)setUserDomainForAppId:(id)a0 object:(id)a1 key:(id)a2 expireTime:(id)a3 completion:(id /* block */)a4;
- (id)syncFetchDefaultDomainObjectForKeysArray:(id)a0;
- (void)setupDefaultUserDefaults;
- (id)userDomainForAppId:(id)a0;
- (id)__syncFetchUserDomainObjectForKeys:(id)a0 userDefault:(id)a1;
- (id)userDomain;
- (id)storageForAppId:(id)a0;
- (void)addClearLocalStorageService:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (id)init;

@end
