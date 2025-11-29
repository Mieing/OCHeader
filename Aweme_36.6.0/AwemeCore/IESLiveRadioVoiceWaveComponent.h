@class NSString, IESLiveRadioVoiceWaveSEIParserResult, IESLiveGCDTimer;
@protocol IESLiveAnchorPFService, IESLiveSEIReceiverService, IESLiveSEISenderService;

@interface IESLiveRadioVoiceWaveComponent : IESLiveInteractComponentBase <IESLiveAnchorPFStateObserver, IESLiveSEIListener, IESLiveSocialInteractAction>

@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isSpeaking;
@property (nonatomic) BOOL lastSpeaking;
@property (retain, nonatomic) IESLiveRadioVoiceWaveSEIParserResult *lastSEIResult;
@property (retain, nonatomic) IESLiveGCDTimer *sendSEITimer;
@property (weak, nonatomic) id<IESLiveSEISenderService> seiSendService;
@property (weak, nonatomic) id<IESLiveSEIReceiverService> seiReceiveService;
@property (weak, nonatomic) id<IESLiveAnchorPFService> anchorPFService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)componentUnmount;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)onAudioDeviceStatus:(long long)a0 isMute:(BOOL)a1 audioDb:(long long)a2 inTime:(long long)a3;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)observeSEI;
- (void)registerObserve;
- (void)componentBindContext;
- (void)stopSendSEITimer;
- (void)startSendSEITimer;
- (void)unregisterObserve;
- (void)willLeaveRadio;
- (void)sendInfoToLynx;
- (void)observeMicro;
- (void)removeObserveMicro;
- (void)removeObserveSEI;
- (void)updateSpeakStatus:(long long)a0;
- (void)sendSEIInfo;
- (void).cxx_destruct;
- (void)clear;
- (void)setup;

@end
