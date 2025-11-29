@class NSLock, NSMutableSet;

@interface UTDCache : NSObject {
    NSMutableSet *logCache;
    NSLock *lock;
}

@property (nonatomic) long long maxCacheSize;

- (void)addLog:(id)a0;
- (void)flush;
- (void).cxx_destruct;
- (id)init;
- (long long)count;

@end
