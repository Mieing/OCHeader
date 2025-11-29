@class BDPLoadTimelineGroup, NSMutableDictionary, BDPThreadSafeDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDPTimelineManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSMutableDictionary *lifecycleIdsDict;
@property (retain, nonatomic) BDPLoadTimelineGroup *timelineDiagramGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pageTaskQueue;
@property (retain, nonatomic) NSMutableDictionary *pageTimelineListDict;
@property (retain, nonatomic) NSMutableDictionary *routeIDListDict;
@property (retain, nonatomic) NSMutableDictionary *collectPointsParamProviderDict;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } routeIDLock;
@property (retain, nonatomic) NSMutableDictionary *tempGroup;
@property (retain, nonatomic) BDPThreadSafeDictionary *collectPointDict;

+ (void)bootstrapLaunch;
+ (BOOL)disableLoadTimeLimeReport;
+ (id)sharedInstance;

- (id)getCurrentRouteIDWithUniqueID:(id)a0;
- (void)recordPageTimelineWithName:(id)a0 param:(id)a1 common:(id)a2 uniqueId:(id)a3 date:(id)a4;
- (void)flushLoadTimelineWithUniqueId:(id)a0;
- (double)fetchPageCollectPointWithName:(id)a0;
- (void)forceUploadTimelinePointWithRouteID:(id)a0 uniqueId:(id)a1 name:(id)a2 param:(id)a3 common:(id)a4 timestamp:(long long)a5;
- (void)recordPageTimelineWithName:(id)a0 param:(id)a1 common:(id)a2 uniqueId:(id)a3 timestamp:(long long)a4;
- (void)routeEndWithType:(id)a0 uniqueID:(id)a1;
- (void)monitorLoadTimelineWithName:(id)a0 extra:(id)a1 uniqueId:(id)a2;
- (id)generateNewRouteIDForUniqueId:(id)a0 appType:(long long)a1 routeEndParamBlk:(id /* block */)a2;
- (void)uploadTimelinePointWithRouteID:(id)a0 uniqueId:(id)a1 name:(id)a2 param:(id)a3 common:(id)a4 timestamp:(long long)a5;
- (void)forceUploadTimelinePointWithRouteID:(id)a0 uniqueId:(id)a1 name:(id)a2 param:(id)a3 common:(id)a4 timestamp:(long long)a5 shouldCollect:(BOOL)a6;
- (void)updateCurrentRouteID:(id)a0 forUniqueID:(id)a1;
- (void)regiterUploadParamProvider:(id)a0 forUniqueID:(id)a1;
- (void)monitorLoadTimelineWithName:(id)a0 extra:(id)a1 date:(id)a2 uniqueId:(id)a3;
- (void)startIDETimelineReportWithServerUrl:(id)a0 uniqueId:(id)a1;
- (void)stopTimelineActionWithUniqueID:(id)a0;
- (void)monitorLoadTimelineWithName:(id)a0 extra:(id)a1 date:(id)a2 cpuTime:(long long)a3 uniqueId:(id)a4;
- (void)reportUniqueEventPageTimelineWithName:(id)a0 param:(id)a1 common:(id)a2 uniqueId:(id)a3 date:(id)a4 routeID:(id)a5;
- (void)uploadPageTimelineWithPoints:(id)a0 routeID:(id)a1 uniqueId:(id)a2;
- (void)generateLifecycleIdIfNeededForUniqueId:(id)a0;
- (BOOL)shouldShowTimeline;
- (void)uploadTimelineDiagramDataWithCallback:(id /* block */)a0;
- (void)holdRouteData:(id)a0 uniqueId:(id)a1;
- (void)monitorLoadTimelineWithJSONPoints:(id)a0 uniqueId:(id)a1;
- (void)executeBlkInTaskQueue:(id /* block */)a0;
- (void)buildTimelineManager;
- (void)buildPageTimeline;
- (void)addLoadTimelinePointWithName:(id)a0 extra:(id)a1 date:(id)a2 cpuTime:(long long)a3 uniqueId:(id)a4;
- (void)internalMonitorLoadTimelineWithJSONPoints:(id)a0 uniqueId:(id)a1;
- (BOOL)getTimelineDiagramSwitch;
- (id)getTimelineDiagramUploadURL;
- (id)commonTimelineParamsWithUniqueId:(id)a0 lifeCycleId:(id)a1 points:(id)a2;
- (void)removeTimelineDiagramGroup;
- (void)closeIDETimelineReportWithUniqueId:(id)a0;
- (void)executeBlkInPageTaskQueue:(id /* block */)a0;
- (void)flushPageTimelineWithUniqueID:(id)a0;
- (id)processPoints:(id)a0 group:(id)a1;
- (void)removeLifecycleIdWithUniqueId:(id)a0;
- (void)clearPageTimelineForUniqueId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
