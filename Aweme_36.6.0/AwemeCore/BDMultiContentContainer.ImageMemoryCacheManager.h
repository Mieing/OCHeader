@interface BDMultiContentContainer.ImageMemoryCacheManager : NSObject {
    void /* unknown type, empty encoding */ lruCache;
    void /* unknown type, empty encoding */ identify;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ clearTimeInterval;
    void /* unknown type, empty encoding */ lastCallTime;
    void /* unknown type, empty encoding */ timerRunning;
}

- (void)tryCleanCache;
- (void).cxx_destruct;
- (id)init;

@end
