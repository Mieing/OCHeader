@class HTSEventContext, HTSLiveToolbarItem, HTSLiveEpisode, IESLiveComponentContext, NSString;
@protocol IESLiveContainerRouterAdapter, IESLiveFlexInteractReaction, IESLiveRoomService, IESLiveURLSchemaHandler;

@interface IESLiveFlexInteractStore : NSObject <HTSLiveMessageSubscriber, IESLiveScreenLockActions, IESLiveAutoRotateAction, IESLiveFlexInteractStatusRouter, IESLiveFIFAPlayerScaleAction, IESLiveMessageSubscriber, IESLiveBannerDispatcher>

@property (retain, nonatomic) HTSLiveToolbarItem *interactControlItem;
@property (retain, nonatomic) HTSLiveToolbarItem *interactControlItemLandscape;
@property (retain, nonatomic) id<IESLiveContainerRouterAdapter> containerRouter;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (nonatomic) BOOL isJSBAllow;
@property (nonatomic) BOOL isFIFAPanelShow;
@property (nonatomic) BOOL isScreenLock;
@property (nonatomic) BOOL interactControlEnable;
@property (nonatomic) BOOL willChangeOrientation;
@property (nonatomic) BOOL hasBannerdata;
@property (nonatomic) BOOL roomAuthInteractiveComponentHidden;
@property (nonatomic) long long orientation;
@property (nonatomic) long long currentShowStatus;
@property (nonatomic) long long currentFaileReason;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveEpisode *itemRoom;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<IESLiveFlexInteractReaction> reactions;
@property (nonatomic) BOOL bannerShouldShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)remoteRoomDataReady:(id)a0;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)didForceUpdateToOrientation:(long long)a0;
- (BOOL)convergedModule;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)unlockScreen;
- (void)receiveBannerData:(id)a0 error:(id)a1;
- (void)refreshBannerData:(id)a0 error:(id)a1 position:(int)a2;
- (void)notifyAvoidIsSideMode:(BOOL)a0;
- (void)displayFlexInteractViewByJSB:(BOOL)a0;
- (void)enableDiggAnimByJSB:(BOOL)a0;
- (void)notifyAvoidRightControl:(double)a0;
- (void)addMoreToolsItemView;
- (BOOL)p_isLandcapeScreen;
- (void)onOrientationTransitionEnd:(long long)a0;
- (void)refreshShowStatus;
- (void)bindOriginStatus;
- (BOOL)isFifaPanelCurrentShow;
- (void)updateShowStatus;
- (BOOL)canShowInCurrentCamera;
- (id)getCurrentShowStatus:(BOOL)a0;
- (void)itemTapped:(id)a0;
- (void)itemShow:(id)a0;
- (void)trackSwitchItemClick;
- (void)changeImageWithSelected:(BOOL)a0 item:(id)a1;
- (void)trackSwitchItemShow;
- (void)trackWithKey:(id)a0;
- (void)failToShowWithReason:(long long)a0;
- (void).cxx_destruct;
- (void)lockScreen;
- (void)messageReceived:(id)a0;

@end
