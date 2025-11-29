@class IESLiveKTVPlayer, NSString, IESLiveInteractVideoChorusConcertViewDragAbility, UIView, IESLiveKTVTuningStore;
@protocol IESLiveInteractDynamicContainerProvider, IESHYContainerProtocol, IESLiveInteractionLinkerService;

@interface IESLiveInteractVideoChorusConcertComponent : IESLiveInteractComponentBase <IESLiveInteractVideoChorusConcertComponentRouter, IESHYHybridViewLifecycleProtocol, IESLiveInteractionLinkerServiceAction, HTSLiveMessageSubscriber, IESLiveVideoChorusConcertActions, IESLiveAutoRotateAction>

@property (retain, nonatomic) IESLiveKTVTuningStore *tuningStore;
@property (retain, nonatomic) IESLiveKTVPlayer *ktvPlayer;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) IESLiveInteractVideoChorusConcertViewDragAbility *dragAbility;
@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicProvider;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (nonatomic) BOOL joinedChorus;
@property (copy, nonatomic) NSString *chorusId;
@property (nonatomic) long long userType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)componentUnmount;
- (void)viewDidStartLoading;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)createLynxView;
- (BOOL)userInActiveList:(id)a0;
- (id)guestInfoList;
- (void)showUserPreView:(id)a0 trackerLabel:(id)a1;
- (void)interactionLinkerService:(id)a0 onFirstRemoteVideoFrameDecodedOfUid:(id)a1;
- (void)interactionLinkerServiceSilentInteractDidStart:(id)a0;
- (void)interactionLinkerServiceInteractDidStart:(id)a0;
- (void)interactionLinkerServiceInteractDidEnd:(id)a0 error:(id)a1;
- (void)interactionLinkerService:(id)a0 onNetworkDetectionResult:(unsigned long long)a1 quality:(unsigned long long)a2 rtt:(int)a3 lostRate:(double)a4 bitrate:(int)a5 jitter:(int)a6;
- (void)interactionLinkerService:(id)a0 onNetworkQuality:(id)a1 remoteQualities:(id)a2;
- (void)interactionLinkerService:(id)a0 onDeviceLoopDelayReceived:(long long)a1;
- (void)componentBindContext;
- (void)updateChorusJoinedState:(BOOL)a0 chorusId:(id)a1 userType:(long long)a2;
- (void)leaveChorusIfNeeded;
- (float)getOtherPeopleStoreVolume;
- (void)showKtvTuningView:(BOOL)a0;
- (void)setPlayBackVolume:(float)a0;
- (void)setRemoteUserDefaultPlaybackVolume:(float)a0;
- (void)setRemoteAudioPlaybackVolume:(float)a0 rtcUid:(id)a1;
- (void)initLiveClient;
- (void)showEmojiPanel:(id)a0;
- (void)notifyVideoChorusConcert:(BOOL)a0;
- (void)layoutLynxView;
- (void)createDragAbility;
- (void).cxx_destruct;
- (void)setVoiceVolume:(float)a0;
- (void)messageReceived:(id)a0;
- (double)bottomHeight;

@end
