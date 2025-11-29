@class LSIMBulletContainerReusePoolConfig, YYMemoryCache, NSMutableSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface LSIMBulletContainerReusePool : NSObject

@property (retain, nonatomic) LSIMBulletContainerReusePoolConfig *config;
@property (retain, nonatomic) NSMutableSet *inProcessIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *inProcessIDsLock;
@property (retain, nonatomic) YYMemoryCache *reusePool;

- (void)saveBulletContainer:(id)a0 withKey:(id)a1;
- (id)bulletContainerWithKey:(id)a0 preferContext:(id)a1;
- (BOOL)containsBulletContainerWithKey:(id)a0 preferContext:(id)a1;
- (BOOL)reusePoolFullWithKey:(id)a0;
- (id)initWithReusePoolConfig:(id)a0;
- (id)p_generateReusePoolWithConfig:(id)a0;
- (void)p_clearAll;
- (id)allBulletContainersWithKeys:(id)a0;
- (id)bulletContainerCountWithKeys:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end
