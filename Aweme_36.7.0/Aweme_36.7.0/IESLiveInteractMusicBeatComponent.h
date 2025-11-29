@class NSString;
@protocol IESLiveRealStreamingProvider, IESLiveInteractLyricRecognitionProtocol, IESLiveSubscription, IESLiveSEISenderService, IESLiveInteractDynamicContainerProvider;

@interface IESLiveInteractMusicBeatComponent : IESLiveInteractComponentBase <IESLiveSEIListener, IESLiveInteractionLinkerServiceAction, IESLiveSocialInteractAction, IESLiveInteractMusicBeatRouter>

@property (nonatomic) BOOL settingEnable;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (weak, nonatomic) id<IESLiveSEISenderService> seiSender;
@property (retain, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicProvider;
@property (retain, nonatomic) NSString *selfUid;
@property (nonatomic) BOOL isAEDOpening;
@property (nonatomic) BOOL isAvatarStreaming;
@property (nonatomic) BOOL joinChannel;
@property (nonatomic) unsigned long long lyricRecognitionStatus;
@property (retain, nonatomic) id<IESLiveSubscription> musicBeatStatusObserver;
@property (nonatomic) unsigned long long musicBeatType;
@property (weak, nonatomic) id<IESLiveInteractLyricRecognitionProtocol> lyricRecognitionProtocol;
@property (copy, nonatomic) NSString *unregisterId;
@property (nonatomic) BOOL degradeMusicBeat;
@property (nonatomic) BOOL enableParticles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)onAudioAEDStateUpdate:(int)a0;
- (void)interactionLinkerService:(id)a0 serverUserListDidChangeFrom:(id)a1 to:(id)a2;
- (void)registerDegradeStrategy;
- (void)unregisterDegradeStrategy;
- (void)componentBindContext;
- (id)getMusicBeatLynxDataWithType:(id)a0;
- (void)onSelfLyricRecognitionStatusChanged:(unsigned long long)a0;
- (void)registerMusicBeatStatusObserver;
- (void)updateMusicBeatOpen:(BOOL)a0 musicBeatType:(unsigned long long)a1;
- (void)onAudioBeatUpdate:(float)a0;
- (void)sendBeatToLynx:(float)a0 musicBeatType:(unsigned long long)a1;
- (void)sendBeatToSEI:(float)a0;
- (id)getMyModel;
- (void).cxx_destruct;
- (id)init;

@end
