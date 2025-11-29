@protocol RxInjector, RTVUserProfileManagerInterface;

@interface RTVInteractionTracker : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)rxAwakeFromPropertyInjection;
- (void)tracker_showCastVideoPanelWithSession:(id)a0 belongUserType:(id)a1 videoFrom:(id)a2 tabName:(id)a3 mixID:(id)a4 challengeID:(id)a5 extraInfo:(id)a6;
- (void)tracker_guestClickCommentIconWithSession:(id)a0 extraInfo:(id)a1;
- (void)tracker_guestCommentPageShowWithSession:(id)a0 extraInfo:(id)a1;
- (void)tracker_clickPlayRecommendVideoButtonWithSession:(id)a0 extraInfo:(id)a1;
- (void)tracker_clickShareButtonWithSession:(id)a0 hasHotReminder:(BOOL)a1 extraInfo:(id)a2;
- (void)track_livesdkEnterCoplayMiniWithMemberCnt:(unsigned long long)a0 eventType:(id)a1 extraInfo:(id)a2;
- (void)track_enterChatWithMethod:(id)a0 chatType:(id)a1 convID:(id)a2 extraInfo:(id)a3;
- (void)__trackEvent:(id)a0 params:(id)a1;
- (void)track_livesdkCoplayInviteCreateGroupEntrance:(id)a0 extraInfo:(id)a1;
- (void)track_livesdReturnFullScreenWithExtraInfo:(id)a0;
- (void)track_livesdkCoplayCreateGroupEntrance:(id)a0 roomController:(id)a1 extraInfo:(id)a2;
- (id)__commonParamsWithRoomController:(id)a0;
- (void)trackClickStartFeedShareWithRoomType:(long long)a0 isRoomOwner:(BOOL)a1;
- (void)trackShowInteractionRoomUserListViewWithRoomController:(id)a0;
- (void).cxx_destruct;

@end
