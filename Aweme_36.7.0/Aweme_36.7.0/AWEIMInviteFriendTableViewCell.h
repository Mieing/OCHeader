@class AWEIMGeneralCardView, AWEButton, UIView, UITapGestureRecognizer;

@interface AWEIMInviteFriendTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) UIView *inviteContainerView;
@property (retain, nonatomic) AWEButton *enterBtn;
@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGes;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)trackLiveShow;
- (void)p_resetUI;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (BOOL)shouldReopenRoomWithClicked;
- (id)p_getCardViewTitleTextWithPart1:(id)a0 part2:(id)a1 isSubTitle:(BOOL)a2;
- (id)p_subtitleTextWithStatus:(BOOL)a0;
- (void)p_disableUserIntereactionIfNeeded;
- (void)setupInviteContainerView;
- (void)enterBtnTapped;
- (BOOL)p_isLiveRoomInvite;
- (void)p_refreshUIWithResponse:(id)a0;
- (void)p_requestRoomInfoWithCompletion:(id /* block */)a0;
- (void)trackMsgWithEvent:(id)a0;
- (void)p_reopenKTV;
- (id)roomPrivacyStatusForType:(long long)a0;
- (id)p_titleFont;
- (id)p_subtitleFont;
- (void)p_disableEnterButton;
- (void)trackMsgShowWithMessage:(id)a0;
- (void)p_setLiveRoomOver:(id)a0;
- (BOOL)p_isOverRoomCache:(id)a0;
- (id)p_linkDaysCache:(id)a0;
- (id)p_linkIntervalCache:(id)a0;
- (void)p_refreshInteractionWithStatus:(BOOL)a0 linkDays:(long long)a1 linkInterval:(long long)a2;
- (void)p_setLiveRoomWithID:(id)a0 linkDays:(id)a1 linkInterval:(id)a2;
- (void)trackMsgWithEvent:(id)a0 message:(id)a1;
- (void)p_initTitleLabel:(id)a0;
- (void)p_initSubtitlleLabel:(id)a0;
- (void)p_disableEnterButtonIfNeeded;
- (void)p_enableEnterButton;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
