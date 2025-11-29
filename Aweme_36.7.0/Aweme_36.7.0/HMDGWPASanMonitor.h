@class NSObject;
@protocol OS_dispatch_source;

@interface HMDGWPASanMonitor : HeimdallrModule {
    NSObject<OS_dispatch_source> *_timer;
}

+ (unsigned int)adaptiveSampleRateWithCount:(unsigned int)a0 maxAllocation:(unsigned int)a1;
+ (id)sharedMonitor;

- (void)updateConfig:(id)a0;
- (void)checkOpenStatus:(int)a0 invalidStop:(BOOL)a1;
- (BOOL)needSyncStart;
- (void)startWithConfig:(id)a0;
- (BOOL)supportGWPAsan;
- (BOOL)canOpenDebugMode:(unsigned int *)a0;
- (unsigned int)normalAllocateLimit;
- (void).cxx_destruct;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startInternal;

@end
