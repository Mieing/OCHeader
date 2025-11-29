@class NSDictionary, NSMutableArray, NSString;
@protocol AWEProfileHeaderFollowAreaActionDelegate;

@interface AWEProfileHeaderFollowAreaSectionController : AWEBaseListSectionController <AWEProfileHeaderFollowAreaCellDelegate>

@property (retain, nonatomic) NSMutableArray *binds;
@property (nonatomic) BOOL hasReceiveAutoShowRecommendCardNotification;
@property (retain, nonatomic) NSDictionary *extraLiveParams;
@property (weak, nonatomic) id<AWEProfileHeaderFollowAreaActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserProfileMutiTargetConfigCommonAdapterClass;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)trackAccuracyCheck;
- (void)updateWithFollowStatus:(long long)a0;
- (id)createAlertView:(id)a0 description:(id)a1;
- (void)trackEventForFollow:(BOOL)a0;
- (void)willSwitchFollowStatusToFriends;
- (void)willSwitchFollowStatusToFollowed;
- (void)trackFollowAds;
- (void)showRemarmNameEntranceAfterFollow;
- (void)showBellPushGuidePanelAfterFollow;
- (void)addAdTrackerWithError:(id)a0;
- (void)addAdTrackerWithError:(id)a0 status:(long long)a1;
- (void)trackSwitchRecommendButtonWithAutoUnFold:(BOOL)a0;
- (void)showRecommendViewAfterFollow;
- (void)trackShowSendMsgButton;
- (void)showRelationMenu:(unsigned long long)a0;
- (void)recommendBtnClicked;
- (void)sendMessageWithEnterString:(id)a0 fromTopButton:(BOOL)a1;
- (void)relationButtonClickWithSenderTag:(long long)a0;
- (void)guideLunaMusicianBtnClicked;
- (void)trackShowRecommendButton;
- (void)trackEventForUnFollow;
- (id)createGuideLunaMusicianBtnIfNeeded;
- (BOOL)shouldShowGuideLunaMusicianBtn;
- (id)aAWEUserProfileMutiTargetConfigCommonAdapter;
- (void)trackGuideLunaEntryShow;
- (void)trackGuideLunaEntryShowFailIfNeed;
- (void)onNotificationShowPrivateMsgBubble:(id)a0;
- (void)onNotificationHidePrivateMsgBubble:(id)a0;
- (void)onNotificationPostWorkRequest:(id)a0;
- (void)onNotificationShowRecommendCard:(id)a0;
- (void)p_checkUnfollowUser:(id)a0;
- (void)p_relationButtonClick;
- (void)handleActionWithType:(long long)a0;
- (void)p_showDoubleCheckForPrivateUser:(id)a0 params:(id)a1 unfollowConfirmationBlock:(id /* block */)a2;
- (id)p_getClueTrackParams:(id)a0;
- (void)p_setLiveRounterParamsWithEnterFrom:(id)a0 trackerParam:(id)a1;
- (void)p_showProfileMenuWithMethod:(unsigned long long)a0;
- (void)p_trackRelationManagePanelShow:(unsigned long long)a0;
- (void)p_transferToChat:(id)a0;
- (void)new_trackEnterChatWithEnterFrom:(id)a0 user:(id)a1 enterChatId:(id)a2;
- (void)p_clickFollowedButton;
- (void)invokeFeedShare;
- (void)invokeCallWithTypeVideo:(BOOL)a0;
- (void)hideRecommendViewAfterUnfollow;
- (void)p_sendLightInteractionMsgForRTV;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)showSeparator;
- (Class)cellClass;

@end
