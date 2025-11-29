@class NSMutableArray, YYMemoryCache, NSMutableSet, IESIMBulletContainerReusePoolConfig, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESIMBulletContainerReusePool : NSObject

@property (retain, nonatomic) IESIMBulletContainerReusePoolConfig *config;
@property (retain, nonatomic) NSMutableSet *inProcessIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *inProcessIDsLock;
@property (retain, nonatomic) YYMemoryCache *reusePool;
@property (retain, nonatomic) NSMutableArray *reuseContainerLists;
@property (nonatomic) long long reuseContainerListsCountLimit;

- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)saveBulletContainer:(id)a0 withKey:(id)a1;
- (id)bulletContainerWithKey:(id)a0 preferContext:(id)a1;
- (BOOL)containsBulletContainerWithKey:(id)a0 preferContext:(id)a1;
- (BOOL)reusePoolFullWithKey:(id)a0;
- (id)initWithReusePoolConfig:(id)a0;
- (void)p_appDidReceiveMemoryWarningNotification;
- (id)p_generateReusePoolWithConfig:(id)a0;
- (void)p_trimReuseContainerList;
- (BOOL)bulletContainerWithItem:(id)a0 perferIdentifier:(id)a1;
- (id)bulletContainerWithKey:(id)a0 perferIdentifier:(id)a1;
- (void)p_clearAll;
- (id)allBulletContainersWithKeys:(id)a0;
- (id)bulletContainerCountWithKeys:(id)a0;
- (void)p_updateReusePoolCountLimit:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)allKeys;

@end
