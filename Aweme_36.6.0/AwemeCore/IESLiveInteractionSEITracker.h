@class NSString, IESLiveNormalSEIParser, IESLiveGCDTimer, IESLiveLinkMicSEIParser;
@protocol IESLiveMultiUserScenarioMonitor;

@interface IESLiveInteractionSEITracker : NSObject <HTSLiveStreamPlayerAction, HTSLiveAudienceActions, IESLiveInteractionLinkerServiceAction>

@property (nonatomic) long long seiReceivedCount;
@property (nonatomic) long long seiLostCount;
@property (nonatomic) long long currentSEIIndex;
@property (nonatomic) BOOL didReceivedFirstSEI;
@property (nonatomic) BOOL playerDidRender;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isReceivingLinkmicSEI;
@property (copy, nonatomic) NSString *currentResolutionType;
@property (retain, nonatomic) IESLiveGCDTimer *seiTimer;
@property (retain, nonatomic) id<IESLiveMultiUserScenarioMonitor> monitor;
@property (retain, nonatomic) IESLiveLinkMicSEIParser *linkMicSEIParser;
@property (retain, nonatomic) IESLiveNormalSEIParser *normalSEIParser;
@property (nonatomic) double seiTimeOutDuration;
@property (nonatomic) BOOL enableCallTrace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (BOOL)isLinkmicRoom:(id)a0;
- (void)liveWillAppear;
- (void)liveWillDisappear;
- (void)playerOnSwitchResolution:(id)a0 error:(id)a1;
- (void)streamPlayerDidReadyToRender;
- (void)interactionLinkerService:(id)a0 didCloseWithContext:(id)a1;
- (void)interactionLinkerServiceInteractDidStart:(id)a0;
- (void)setupSEIParser;
- (void)observeMetaInfo;
- (void)startLinkmicSEITimerIfNeed;
- (void)trackFirstSEITimeOut;
- (void)trackWithDescription:(id)a0 extra:(id)a1;
- (void)trackSEIArrivalRateWithSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)currentLayout;
- (id)extraInfo;

@end
