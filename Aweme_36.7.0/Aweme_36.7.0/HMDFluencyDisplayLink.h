@class CADisplayLink, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDFluencyDisplayLink : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *displayLinkQueue;
@property (retain, nonatomic) NSMutableArray *callbackObjs;
@property (nonatomic) double lastVSyncInterval;
@property (nonatomic) double lastTimestamp;
@property (retain) CADisplayLink *displayLink;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL updateFrameRangeEnabled;

+ (id)shared;

- (void)applicationWillResignActiveNotification:(id)a0;
- (BOOL)p_tryToStartDisplayLink;
- (BOOL)p_tryToStopDisplayLink;
- (long long)screenMaximumFramesPerSecond;
- (void)frameUpdate:(id)a0;
- (void)registerFrameCallback:(id)a0 completion:(id /* block */)a1;
- (void)unregisterFrameCallback:(id)a0;
- (void)disableFrameRangeUpdateInNormalDevice;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationDidBecomeActiveNotification:(id)a0;

@end
