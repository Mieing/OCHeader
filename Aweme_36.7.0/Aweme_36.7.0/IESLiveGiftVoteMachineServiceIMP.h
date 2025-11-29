@class NSString, NSMutableDictionary, IESLiveGiftVoteMachineContainerView;

@interface IESLiveGiftVoteMachineServiceIMP : IESLiveGeneralBaseService <IESHYHybridViewLifecycleProtocol, IESLiveGiftModuleVoteMachineService, HTSLiveOrientationActions>

@property (retain, nonatomic) IESLiveGiftVoteMachineContainerView *containerView;
@property (retain, nonatomic) NSMutableDictionary *channel2ContainerViewMap;
@property (nonatomic) BOOL feedGuestViewLoaded;
@property (nonatomic) BOOL isInPreView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL supportMultiView;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (id)initWithDIContext:(id)a0;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)trigerLynxView:(id)a0;
- (void)trigerVoteMachine:(id)a0 draggable:(BOOL)a1 touchable:(BOOL)a2 viewType:(long long)a3 action:(long long)a4;
- (void)fetchCurrentReceiveGamePlayWithRoomid:(id)a0 completion:(id /* block */)a1;
- (void)updateReceiveGamePlayWithRoomid:(id)a0 switchStatus:(BOOL)a1 completion:(id /* block */)a2;
- (void)couldAddTrigerLynxView;
- (void)removeAllMultiViews;
- (void)removeContainerView;
- (void)showContainerWithURL:(id)a0 viewType:(long long)a1;
- (void)showContainerWithLynxConfig:(id)a0;
- (void)removeCurrentView:(id)a0;
- (void)removeTrigerViewInFeed:(id)a0;
- (void)addTrigerViewInFeed:(id)a0;
- (BOOL)shouldOptBoxPositionWithIdentifier:(id)a0;
- (id)getFoundationViewWithIdentifier:(id)a0 channel:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
