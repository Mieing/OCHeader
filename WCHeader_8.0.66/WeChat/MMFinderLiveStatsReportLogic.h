@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MMFinderLiveStatsReportLogic : NSObject <MMFinderLiveStatsReporterDelegate, MMLiveTaskMgrExt>

@property (retain, nonatomic) NSMutableDictionary *reporterDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerExtension;
- (void)reportWithLiveTask:(id)a0 itemArray:(id)a1 immediately:(BOOL)a2;
- (void)onJoinLiveFinish:(BOOL)a0 sessionId:(id)a1;
- (void)innerReportWithLiveTask:(id)a0 itemArray:(id)a1 immediately:(BOOL)a2;
- (void)onExitLiveRoom:(id)a0;
- (id)getReporterForSessionId:(id)a0;
- (id)getOrCreateReporterForLiveTask:(id)a0;
- (void)onLiveStatsReporterShouldRelease:(id)a0;
- (void)onLiveTaskExitLive:(id)a0;
- (void).cxx_destruct;

@end
