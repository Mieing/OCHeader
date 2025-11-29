@class NSString, NSTimer, IESLiveStreamListenModeDecorationView, IESLiveBackgroundStrategyFactory;

@interface IESLiveStreamListenModeFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler, HTSLiveStreamPlayerAction, IESLiveAutoRotateAction, IESLiveInteractAction, IESLiveSocialInteractAction, IESLivePipActions, IESLiveAudienceDisableClarityProtocol, IESLiveStreamListenModeStateProvider>

@property (retain, nonatomic) IESLiveStreamListenModeDecorationView *listenModeView;
@property (retain, nonatomic) IESLiveBackgroundStrategyFactory *strategyFactory;
@property (retain, nonatomic) NSString *currentSDKKey;
@property (nonatomic) unsigned long long switchState;
@property (retain, nonatomic) NSTimer *switchOutTimer;
@property (nonatomic) double beginListenTime;
@property (nonatomic) BOOL hasTriggeredTimeOut;
@property (retain, nonatomic) NSString *initialEnterRoomResolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)startToShowPipWithShowType:(unsigned long long)a0;
- (void)showBusinessPip;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)disableSDKKeys:(id)a0;
- (void)playerWillPrepareReuseForSmoothLeave;
- (void)playerOnSwitchResolution:(id)a0 error:(id)a1;
- (BOOL)enableListenOnlyMode;
- (BOOL)isInListenModeNow;
- (void)turnOffListenModeWithCallTrace:(id)a0 trackEndReason:(id)a1;
- (void)setListenModelViewHidden:(BOOL)a0 callTrace:(id)a1 trackEndReason:(id)a2;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)storeCurrentLiveResolution;
- (void)tryTurnOnLiveListenModeWithCallTrace:(id)a0;
- (void)listenModeSwitchToSucceedWithCallTrace:(id)a0;
- (void).cxx_destruct;

@end
