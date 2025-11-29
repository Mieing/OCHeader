@class HMDMonitorCallbackObject, NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AWEClientAIUIBlockHelper : NSObject <AWEClientAIUIBlockInterface> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (weak, nonatomic) HMDMonitorCallbackObject *fpsCallbackObj;
@property (weak, nonatomic) HMDMonitorCallbackObject *dropCallbackObj;
@property (weak, nonatomic) HMDMonitorCallbackObject *dropCallbackObjV2;
@property (nonatomic) BOOL fpsMonitoring;
@property (nonatomic) BOOL dropMonitoring;
@property (nonatomic) double lastFpsUpdateTimeMs;
@property (nonatomic) double lastDropUpdateTimeMs;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operateQueue;
@property (nonatomic) double lastUiFps;
@property (nonatomic) long long lastUiBlockTime;
@property (nonatomic) long long lastUiBlockCount;
@property (nonatomic) long long lastUiDropCount;
@property (nonatomic) long long lastUiDropMax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshUIFPS;
- (void)addFrameMonitorCallBackWithRecord:(id)a0;
- (BOOL)enableDisplaylinkOpt;
- (void)onHMDANROver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupNotifications;

@end
