@class NSString, IESLiveRoomMQEventReportApi, IESLiveGCDTimer;
@protocol IESLivePerfSampler, IESLiveFaceEffectReportHelperDelegate;

@interface IESLiveFaceEffectReportHelper : NSObject <IESLiveEffectRenderListener>

@property (nonatomic) long long scene;
@property (nonatomic) double effectSelectedTime;
@property (nonatomic) double effectAppliedTime;
@property (nonatomic) double effectDownloadDuration;
@property (retain, nonatomic) IESLiveGCDTimer *effectiveUseTimer;
@property (nonatomic) long long effectiveUserTime;
@property (retain, nonatomic) IESLiveGCDTimer *aigcBgEffectiveUseTimer;
@property (retain, nonatomic) IESLiveRoomMQEventReportApi *eventReportApi;
@property (retain, nonatomic) IESLiveGCDTimer *costStatisticsTimer;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (weak, nonatomic) id<IESLiveFaceEffectReportHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopEffectiveUseTimer;
- (void)stopEffectCostStatistics;
- (void)perfSamplerDeactiveFaceEffectFeature;
- (void)trackEffectCostStatistics;
- (void)setupEffectRenderMsgHandler;
- (void)updateEffectDownloadDuration:(double)a0;
- (void)reportEffectAppliedResult:(long long)a0 effect:(id)a1 appliedDuration:(double)a2 totalDuration:(double)a3;
- (void)updateEffectSelectedTime;
- (void)reportAnchorSelectEffect:(id)a0;
- (void)reportFaceEffectEvent:(id)a0 roomId:(id)a1 isStart:(BOOL)a2 extra:(id)a3;
- (void)updateEffectAppliedTime;
- (void)perfSamplerActiveFaceEffectFeature:(id)a0 isInitial:(BOOL)a1;
- (void)startEffectiveUseTimer;
- (void)startAigcBgEffectiveUseTimer;
- (void)stopAigcBgEffectiveUseTimer;
- (void)onEffectRenderCallback:(int)a0 arg1:(int)a1 arg2:(int)a2 arg3:(id)a3;
- (id)scene2EventPage;
- (void)cleanEffectRenderTime;
- (void)trackEffectApplyPerf:(id)a0 step:(id)a1;
- (void)onEffectUseTimerScheduled;
- (void).cxx_destruct;
- (id)initWithScene:(long long)a0;

@end
