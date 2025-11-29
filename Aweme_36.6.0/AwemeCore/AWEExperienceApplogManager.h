@class NSMutableSet;

@interface AWEExperienceApplogManager : NSObject

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (retain, nonatomic) NSMutableSet *applogListeners;

+ (long long)defaultBatchInterval;
+ (void)setExpectedBatchEventInterval:(double)a0 withCaller:(id)a1 withUniqueKey:(id)a2;
+ (void)applogFlush;
+ (id)sharedInstance;

- (void)registerApplogListener:(id)a0;
- (void)unRegisterApplogListener:(id)a0;
- (void)notifyListenerWithEvent:(id)a0 params:(id)a1;
- (void)registerAppLogHooker;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
