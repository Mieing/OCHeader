@class NSString;
@protocol IESLiveCompoundSubscription;

@interface IESLiveAudienceEffectAdFragment : IESLiveRoomComponent <HTSLiveGiftActions, IESLiveMessageInteractionModuleCommentAction, HTSLiveRoomProfileReaction, HTSLiveUserPreviewActions, HTSLiveAudienceActions, HTSLiveRoomRemoteActions, HTSLiveFollowGuideActions, HTSLiveSpeedGiftActions, IESLiveAudienceECommerceActions, HTSLiveLongPressActions, IESLiveCommercialAdContextHelper, IESLiveRoomWatchTimeDelegate>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL hasShoppingToolBarItemShown;
@property (nonatomic) BOOL hasGameToolBarItemShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentUnmount;
- (void)didSendGiftWithCost:(long long)a0;
- (void)onCommentSucceed:(id)a0 fromEnterSource:(long long)a1;
- (void)reportWithRoom:(id)a0 refer:(id)a1;
- (void)didEnterLiveRoom:(id)a0;
- (void)didCloseLiveRoomWithDuration:(double)a0;
- (void)liveFirstWatchingOneMinute;
- (void)didShowShoppingToolBarItem;
- (id)enterLiveRoomData;
- (void)iesliveTrackAdEventWithLabel:(id)a0 refer:(id)a1 extra:(id)a2;
- (id)iesliveCommercialAdContext;
- (id)getRoomAndAnchorInfo;
- (void)didFollowAnchor;
- (void)didFollowAnchorSuccessWithStatus:(long long)a0;
- (void)followAnchorSuccess;
- (void)unfollowAnchorSuccess;
- (void)followUserSuccessWithStatus:(long long)a0;
- (void)followUserSuccessFromFollowGuide;
- (void)followAnchorSuccessWithLongPress;
- (void)unfollowAnchorSuccessWithLongPress;
- (void)didFollowAnchorSuccessInLongPressWithStatus:(long long)a0;
- (BOOL)isLiveAdRoom;
- (id)buildLiveAdTrackContext:(id)a0;
- (id)buildClickURLModel;
- (void)didSendSpeedGiftWifhAmount:(id)a0;
- (void)_setupActions;
- (void)_trackEffectAdWithEvent:(id)a0 params:(id)a1;
- (BOOL)isExcitation;
- (void)liveRoomWatchMinitTick:(unsigned long long)a0;
- (void).cxx_destruct;

@end
