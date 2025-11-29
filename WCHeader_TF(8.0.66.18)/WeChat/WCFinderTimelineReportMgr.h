@class MMTimer, NSMutableDictionary, NSMapTable, NSString, NSMutableArray;

@interface WCFinderTimelineReportMgr : NSObject <MMConfigMgrExt>

@property (retain, nonatomic) NSMutableArray *reportStatsArray;
@property (retain, nonatomic) NSMutableArray *watingReportPool;
@property (retain, nonatomic) NSMutableDictionary *currentStatsPool;
@property (nonatomic) BOOL isContinue;
@property (retain, nonatomic) MMTimer *reportTimer;
@property (nonatomic) unsigned long long reportTryTimes;
@property (nonatomic) double streamRequestInterval;
@property (nonatomic) double lastStreamCGIPostTime;
@property (retain, nonatomic) NSMutableArray *enhanceStatsArray;
@property (retain, nonatomic) NSMapTable *recardStatModelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onMMDynamicConfigUpdated;
- (void)dealloc;
- (void)reportImmediately;
- (void)startStatsReport;
- (void)endStatsReport;
- (void)reportAllPoolImmediately;
- (void)reportAllPoolIgnoreTimer:(BOOL)a0;
- (void)pourStateIntoPoolWithTid:(id)a0;
- (void)pourStateIntoPoolImmediatelyWithTid:(id)a0;
- (void)reportAllStatsPool;
- (void)reportAllStatsByStreamCGI;
- (id)getMetaModelFromCurrentStatsPoolWithTid:(id)a0;
- (void)reportStatsPoolArrayWithDelayTime:(double)a0;
- (void)updateMetaModelWithTid:(id)a0 updateBlock:(id /* block */)a1;
- (void)createMetaModelWithTid:(id)a0 nonceID:(id)a1 commentScene:(int)a2 updateBlock:(id /* block */)a3;
- (void)reportInteractiveActionWithTid:(id)a0 nonceID:(id)a1 interactiveType:(unsigned long long)a2;
- (void)reportInteractiveActionWithTid:(id)a0 nonceID:(id)a1 interactiveType:(unsigned long long)a2 updateBlock:(id /* block */)a3;
- (void)pourStatsIntoPoolWithMusicVM:(id)a0 commentScene:(int)a1;
- (void)pourStatsIntoPoolWithContentVM:(id)a0 commentScene:(int)a1;
- (void)reportFullStatsExceptTidImmediately:(id)a0;
- (void)realReportFullStatsExceptTidImmediately:(id)a0;
- (id)getFullStatsFromCurrentStatsPool;
- (void)pourStatsIntoPoolWithFinderMegaVideo:(id)a0 commentScene:(int)a1;
- (id)getFullStatsFromEnhanceStatsPool;
- (void)pushStatReportShim:(id)a0;
- (void)_callShimWhenUpdateModel:(id)a0;
- (void)popStatReportShim:(id)a0;
- (void).cxx_destruct;

@end
