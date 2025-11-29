@class IESLiveRoomProfileView, HTSLiveRoomStatsMessage, NSString, UIView, IESLiveRoomProfileStore;
@protocol HTSLivePluginLayoutView, IESLiveUserProfileViewProtocol;

@interface IESLiveProfileFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveRoomProfileRouter, IESLiveStickerAnchorActions>

@property (retain, nonatomic) IESLiveRoomProfileStore *store;
@property (retain, nonatomic) UIView<HTSLivePluginLayoutView, IESLiveUserProfileViewProtocol> *mSeqProfileView;
@property (retain, nonatomic) IESLiveRoomProfileView *profileView;
@property (retain, nonatomic) HTSLiveRoomStatsMessage *roomStatsMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)componentRefresh;
- (BOOL)convergedModule;
- (void)refreshLayoutOrientation:(long long)a0;
- (id)onlineAudienceCount;
- (void)showDoubleDiggAnimationWithMainText:(id)a0 subText:(id)a1 repeat:(BOOL)a2;
- (void)stickerViewMoving:(id)a0;
- (void)stickerViewMoveEnd:(id)a0;
- (id)topLeftTipTargetAvatarView;
- (id)topLeftTipTargetMiddleView;
- (void)showExchangeTopAndBottomLabelAnimation;
- (void)requestToShowTempInfoViewWithItem:(id)a0;
- (id)liveDouPlusMessage;
- (BOOL)profileIsInTempState;
- (BOOL)shouldRenderMSeqView;
- (void)renderRoomProfile;
- (void)showLabelExchangeAnimation;
- (void)handleRoomStatsMSg:(id)a0;
- (BOOL)shouldNotRenderInCurrentScene;
- (BOOL)enableRoomProfile;
- (void)pr_removeAllProfileView;
- (void)addProfileView:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
