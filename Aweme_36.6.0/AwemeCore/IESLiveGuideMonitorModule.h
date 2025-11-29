@class IESLiveAnchorPerfTrackImpl, IESLiveGuideContainerContext;
@protocol IESLiveCreateRoomPreCheckService, IESLivePerfSampler, IESLiveFullLinkMonitor;

@interface IESLiveGuideMonitorModule : IESLiveGuideExecutionBaseModule

@property (retain, nonatomic) IESLiveGuideContainerContext *containerContext;
@property (retain, nonatomic) IESLiveAnchorPerfTrackImpl *anchorPerfTrack;
@property (nonatomic) double startTime;
@property (retain, nonatomic) id<IESLiveCreateRoomPreCheckService> preCheckService;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) BOOL willChangeToGuideVC;
@property (nonatomic) double startLoadTime;

- (void)trackStayTime;
- (void)didEnterLiveTabWithStartTime:(id)a0;
- (void)cameraDidSet;
- (BOOL)enableUploadBandwidthProber;
- (void)subscribeExecutionMessage;
- (void)initialize:(id)a0 params:(id)a1;
- (void)switchToOtherTab;
- (void)switchToLiveTab;
- (void)viewDidAppear:(id)a0 params:(id)a1;
- (void)viewDidDisappear:(id)a0 params:(id)a1;
- (void)closeGuideVC;
- (void)trackGuideFirstUILoadPerf:(id)a0;
- (void)trackPush;
- (void)liveTypeDidChange;
- (void)componentFirstFrameStartLoad;
- (void)componentFirstFrameFinishWithCost:(double)a0;
- (void)componentMountDidAllFinish;
- (void)willStartOpenLive:(id)a0 anchorRoomContext:(id)a1;
- (void)trackTakePageShow;
- (void)trackLiveTakeWithRoom:(id)a0;
- (id)trackParamWithRoom:(id)a0 extraParams:(id)a1;
- (void)markTopicUseForRoom:(id)a0 withSource:(long long)a1;
- (void)trackVideoRecommendResolution:(id)a0;
- (id)trackPSSetting;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)qualityType;

@end
