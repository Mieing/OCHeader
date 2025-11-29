@class NSString, NSMapTable;

@interface BDPUniqueIDBindService : NSObject <BDPUniqueIDBindService, BDPWarmBootMessage>

@property (retain, nonatomic) NSMapTable *uniqueIDBindTable;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } uniqueIDBindLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)addBindObj:(id)a0 forUniqueID:(id)a1;
- (id)getBindObjWithClz:(Class)a0 withUniqueID:(id)a1;
- (void).cxx_destruct;

@end
