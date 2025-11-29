@class NSString, IESliveAudienceInteractPanelTrackParams;
@protocol IESLiveMultiUserScenarioMonitor;

@interface IESLiveInteractPanelTracker : NSObject <IESLiveAudienceInteractPanelTrackService>

@property (nonatomic) long long finishStage;
@property (nonatomic) long long currentStage;
@property (retain, nonatomic) IESliveAudienceInteractPanelTrackParams *trackParams;
@property (nonatomic) long long type;
@property (retain, nonatomic) id<IESLiveMultiUserScenarioMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)panelShowAllStage;

- (id)currentUserType;
- (void)markShowStage:(long long)a0;
- (id)functionType2;
- (void)markFetchListStage:(long long)a0 url:(id)a1;
- (void)registerFinalReportURL:(id)a0;
- (id)initWithPanelType:(long long)a0 finishStage:(long long)a1;
- (void)markStageTimeWithParams:(id)a0 time:(double)a1 stage:(long long)a2;
- (void)reportPanelFirstFrameDurationWithType:(long long)a0;
- (void)markShowStage:(long long)a0 time:(double)a1;
- (void)reportFetchListFinishIfNeedWithURL:(id)a0;
- (void)reportRenderListFinishIfNeedWithURL:(id)a0;
- (id)panelTypeWithType:(long long)a0;
- (void)callTraceWithDesc:(id)a0 extra:(id)a1;
- (void)panelCreateCallTrace;
- (void)panelRenderCallTrace;
- (void).cxx_destruct;
- (id)room;

@end
