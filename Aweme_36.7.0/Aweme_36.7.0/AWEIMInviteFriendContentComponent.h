@class NSNumber, NSString;

@interface AWEIMInviteFriendContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) NSNumber *isRoomOverNum;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)trackLiveShow;
- (BOOL)shouldReopenRoomWithClicked;
- (id)p_getCardViewTitleTextWithPart1:(id)a0 part2:(id)a1 isSubTitle:(BOOL)a2;
- (id)p_subtitleTextWithStatus:(BOOL)a0;
- (void)p_disableUserIntereactionIfNeeded;
- (void)enterBtnTapped;
- (BOOL)p_isLiveRoomInvite;
- (void)p_requestRoomInfoWithCompletion:(id /* block */)a0;
- (void)trackMsgWithEvent:(id)a0;
- (void)p_reopenKTV;
- (id)roomPrivacyStatusForType:(long long)a0;
- (void)trackMsgShowWithMessage:(id)a0;
- (void)p_setLiveRoomOver:(id)a0;
- (BOOL)p_isOverRoomCache:(id)a0;
- (id)p_linkDaysCache:(id)a0;
- (id)p_linkIntervalCache:(id)a0;
- (void)p_setLiveRoomWithID:(id)a0 linkDays:(id)a1 linkInterval:(id)a2;
- (void)trackMsgWithEvent:(id)a0 message:(id)a1;
- (void)p_createSmallCardPresenter;
- (id)inviteFriendMessage;
- (void)p_refreshInteractionWithStatus:(BOOL)a0 linkDays:(long long)a1 linkInterval:(long long)a2 needReload:(BOOL)a3;
- (void).cxx_destruct;
- (id)displayMessage;

@end
