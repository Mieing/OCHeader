@class NSString;
@protocol IESLiveCompoundSubscription, IESLiveDouPlusService, IESLiveAudienceMoreToolsProvider, IESLivePerfSampler;

@interface AWELiveAudienceSoftAdFragment : IESLiveRoomComponent <HTSLiveGiftActions, IESLiveMessageInteractionModuleCommentAction, HTSLiveRoomProfileReaction, HTSLiveUserPreviewActions, HTSLiveAudienceActions, HTSLiveRoomRemoteActions, HTSLiveFollowGuideActions, HTSLiveSpeedGiftActions, IESLiveAudienceECommerceActions, HTSLiveLongPressActions, IESLiveCommercialAdContextHelper>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) id<IESLiveDouPlusService> douPlusService;
@property (retain, nonatomic) id<IESLiveAudienceMoreToolsProvider> moreToolsProvider;
@property (nonatomic) BOOL hasGoodsInHistory;
@property (nonatomic) BOOL hasShoppingToolBarItemShown;
@property (nonatomic) BOOL hasGameToolBarItemShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentUnmount;
- (void)didSendGiftWithCost:(long long)a0;
- (BOOL)shouldShowDouPlusXiaoDianEntrance;
- (void)onCommentSucceed:(id)a0 fromEnterSource:(long long)a1;
- (void)unfollowUser;
- (void)reportWithRoom:(id)a0 refer:(id)a1;
- (void)didCloseLiveRoomWithDuration:(double)a0;
- (void)liveFirstWatchingOneMinute;
- (void)didShowShoppingToolBarItem;
- (void)didShowCommerceCardView;
- (void)updateGoodsStatus;
- (void)iesliveTrackAdEventWithLabel:(id)a0 refer:(id)a1 extra:(id)a2;
- (id)iesliveCommercialAdContext;
- (id)getRoomAndAnchorInfo;
- (void)trackDouplusWithEvent:(id)a0 params:(id)a1;
- (void)didFollowAnchor;
- (void)didFollowAnchorSuccessWithStatus:(long long)a0;
- (void)followAnchorSuccess;
- (void)unfollowAnchorSuccess;
- (void)followUserSuccess;
- (void)followUserSuccessWithStatus:(long long)a0;
- (void)followUserSuccessFromFollowGuide;
- (void)followAnchorSuccessWithLongPress;
- (void)unfollowAnchorSuccessWithLongPress;
- (void)didFollowAnchorSuccessInLongPressWithStatus:(long long)a0;
- (BOOL)isLiveAdRoom;
- (id)buildLiveAdTrackContext:(id)a0;
- (id)buildClickURLModel;
- (void)didSendSpeedGiftWifhAmount:(id)a0;
- (void).cxx_destruct;
- (void)setupActions;

@end
