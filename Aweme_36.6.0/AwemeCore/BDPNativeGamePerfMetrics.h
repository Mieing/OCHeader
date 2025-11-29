@class NSString, BDPNativeGameInteractiveReadyEventModel, BDPUniqueID, NSObject;
@protocol OS_dispatch_queue;

@interface BDPNativeGamePerfMetrics : NSObject <BDPNativeGamePerfMetricsMessage, BDPBootLifeCycleMessage, BDPPageDiagnoseProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPNativeGameInteractiveReadyEventModel *recordInteractiveReadyEvent;
@property (nonatomic) BOOL hasDiagnose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMessage;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)gatherDiagnoseInfo:(id)a0 triggerType:(id)a1;
- (void)maybeGameLoaded:(unsigned long long)a0 multiplier:(float)a1;
- (void)gameInteractiveReadyWithParams:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end
