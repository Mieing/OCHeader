@class IESLiveStableModeStrategy, NSString, IESLiveGCDTimer;
@protocol IESLiveSettings;

@interface IESLiveAnchorReviewSexModelFragment : IESLiveRoomComponent <IESLiveAnchorClientAIService, IESLiveAnchorRoomStatusChangeEvents, IESLiveSettingsSubscriber, IESLiveTextClassifyDelegate, IESLiveGuideOpenLiveAdditionalEvent>

@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (retain, nonatomic) IESLiveGCDTimer *sexBeginTimer;
@property (retain, nonatomic) IESLiveGCDTimer *ocrBeginTimer;
@property (retain, nonatomic) IESLiveGCDTimer *qrBeginTimer;
@property (retain, nonatomic) IESLiveGCDTimer *classifyImageBeginTimer;
@property (retain, nonatomic) IESLiveGCDTimer *asrAgentBeginTimer;
@property (retain, nonatomic) IESLiveGCDTimer *asrLongAgentBeginTimer;
@property (retain, nonatomic) IESLiveGCDTimer *messageAgentBeginTimer;
@property (retain, nonatomic) IESLiveGCDTimer *seiAgentBeginTimer;
@property (retain, nonatomic) IESLiveGCDTimer *anchorPMAgentBeginTimer;
@property (nonatomic) BOOL isVRLiveMode;
@property (nonatomic) BOOL anchorTopFlag;
@property (nonatomic) BOOL hasOpenASRPlus;
@property (retain, nonatomic) IESLiveStableModeStrategy *clientAIModelStrategy;
@property (nonatomic) BOOL isClientModelStrategyEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)prepareAnchorLive;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)willStopAnchorLive;
- (void)stopAnchorLive;
- (void)appendOpenLiveRequestParams:(id)a0 completion:(id /* block */)a1;
- (void)startStableModeStrategy;
- (void)sendChatMessage:(id)a0 user:(id)a1 eventTime:(long long)a2;
- (void)createClientAIStableModeStrategy;
- (void)registerStableModeStrategy;
- (void)settingUpdateWithKey:(id)a0 value:(id)a1;
- (void)pushTextClassifyResult:(id)a0;
- (void).cxx_destruct;

@end
