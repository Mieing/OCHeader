@class NSArray, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_source;

@interface HMDSubThreadRunloopMonitorPlugin : NSObject <HMDThreadMonitorPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (copy, nonatomic) NSArray *observerThreadList;
@property (nonatomic) long long subThreadRunloopTimeoutDuration;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSMutableDictionary *subThreadRunloopMonitors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginInstance;

- (void)addRunloop:(struct __CFRunLoop { } *)a0 thread:(unsigned long long)a1;
- (BOOL)isThreadNeedObserver:(id)a0;
- (void)setupThreadConfig:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
