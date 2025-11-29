@class NSMutableSet;

@interface HMDURLCacheManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _managedPathRWLock;
}

@property (retain, nonatomic) NSMutableSet *customCachePath;
@property (nonatomic) BOOL isRunning;

+ (id)sharedInstance;

- (void)registerCustomCachePath:(id)a0;
- (void)unregisterCustomCachePath:(id)a0;
- (BOOL)checkAvailabaleCustomCachePath:(id)a0 urlCacheInstance:(id)a1;
- (BOOL)managerIsRunning;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
