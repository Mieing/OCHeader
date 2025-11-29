@class NSMutableDictionary, TIMXSDKInstance, NSString, TIMXElapsedTimeTracker;

@interface TIMXElapsedTimeMonitorManager : NSObject <TIMXElapsedTimeMonitorManagerProtocol, TIMXInstanceScopeSingleton>

@property (retain, nonatomic) NSMutableDictionary *monitorDict;
@property (weak, nonatomic) TIMXSDKInstance *r;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) TIMXElapsedTimeTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)monitorWithType:(unsigned long long)a0;
- (id)createMonitorWithType:(unsigned long long)a0 timeoutTime:(double)a1;
- (id)autoCreateMonitorWithType:(unsigned long long)a0;
- (void)finishTaskWithMonitorType:(unsigned long long)a0 taskId:(id)a1;
- (id)createMonitorCoreWithType:(unsigned long long)a0 timeoutTime:(double)a1;
- (id)monitorWithType:(unsigned long long)a0 autoCreated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
