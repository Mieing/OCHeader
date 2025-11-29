@class MMKV;

@interface AWEContentEvalInfo : NSObject

@property (retain, nonatomic) MMKV *mmkvStorage;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;

+ (id)sharedInstance;

- (void)flushToDisk;
- (id)valueForKey:(id)a0 aweme:(id)a1;
- (id)scoreOfAweme:(id)a0 evalMode:(id)a1 scene:(id)a2;
- (id)initFromStorage;
- (void)p_registerTiming;
- (void)clearItemIfNeeded;
- (id)createAwemeInfo;
- (BOOL)isValidTime:(double)a0;
- (void)updateClientScore:(id)a0 forAweme:(id)a1 scene:(id)a2;
- (void)updateGlobalScore:(id)a0 forAweme:(id)a1;
- (void)updateCloudScore:(id)a0 cacheStatus:(id)a1 recallReason:(id)a2 forAweme:(id)a3;
- (void)updateValue:(id)a0 forKey:(id)a1 aweme:(id)a2;
- (void)updateValues:(id)a0 aweme:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
