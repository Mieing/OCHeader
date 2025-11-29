@interface HMDSlardarMallocTracker : HMDTracker {
    BOOL _isInitSlardarMalloc;
}

+ (id)sharedTracker;

- (void)checkOpenStatus:(int)a0 invalidStop:(BOOL)a1;
- (void)start;

@end
