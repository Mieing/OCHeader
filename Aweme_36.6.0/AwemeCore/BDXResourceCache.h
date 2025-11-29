@class NSString, NSMutableSet, NSMutableArray, NSCache;

@interface BDXResourceCache : NSObject <IESGurdEventDelegate, NSCacheDelegate>

@property (nonatomic) long long sharedCacheSize;
@property (retain, nonatomic) NSCache *sharedCache;
@property (retain, nonatomic) NSCache *priorityCache;
@property (nonatomic) long long prioritySize;
@property (retain, nonatomic) NSCache *templateCache;
@property (nonatomic) long long templateCount;
@property (nonatomic) long long currentTemplateCount;
@property (retain, nonatomic) NSMutableArray *templateList;
@property (retain, nonatomic) NSCache *subResourceCache;
@property (nonatomic) long long subResourceSize;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } keysLock;
@property (retain, nonatomic) NSMutableSet *cacheKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getKeyFromParamConfig:(id)a0;
+ (id)sharedInstance;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)gurdDidCleanCachePackageForAccessKey:(id)a0 channel:(id)a1;
- (void)setDisable:(BOOL)a0;
- (void)setupWithSize:(long long)a0;
- (void)handleMemoryWarning:(id)a0;
- (void)removeLowPriorityCache;
- (id)resourceForKey:(id)a0 paramConfig:(id)a1;
- (void)setResource:(id)a0 forKey:(id)a1 paramConfig:(id)a2;
- (void)setupWithPrioritySize:(long long)a0;
- (void)setupWithTemplateCount:(long long)a0;
- (void)setupWithSubResourceSize:(long long)a0;
- (void)cleanCacheForAccessKey:(id)a0 channel:(id)a1;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)dealloc;

@end
