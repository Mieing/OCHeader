@class UIStackView, NSString, UIImageView, NSTimer, UILabel, UIView;
@protocol AWEInnerNotificationContentOperator, AWEIMStreakDisplayManagerProtocol;

@interface AWENoticeInviteFriendPushView : AWENoticePushView <AWEIMStreakDisplayManagerDelegate, AWELiveRoomMessage, AWEInnerNotificationContent>

@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) NSTimer *vibrateTimer;
@property (retain, nonatomic) UIStackView *rightContentView;
@property (retain, nonatomic) UIImageView *acceptButton;
@property (retain, nonatomic) UIImageView *rejectButton;
@property (nonatomic) BOOL isPlayTogetherPush;
@property (retain, nonatomic) NSString *roomID;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ enterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)customIMStreakTextFont;
- (void)asyncDidUpdateIMStreakView;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (BOOL)hitStreakUpdateExp;
- (void)p_setUpUI;
- (void)p_cancel;
- (void)p_doVibrate;
- (void)p_updateConsecutiveChatStatusWithPushModel:(id)a0;
- (BOOL)playTogetherEnable;
- (void)setupRightArea;
- (void)p_enter;
- (void)tansferToRoom:(id)a0;
- (void)configureWithPushModel:(id)a0;
- (void)p_updatePushViewWithNoticePushForInviteFriend:(id)a0;
- (void)p_trackInviteFriendCallingShowWithShowModel:(id)a0;
- (void)trackEventEnter:(id)a0;
- (void)trackEventClick:(id)a0;
- (void)audienceWillEnterLiveRoom:(id)a0 anchorID:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (id)view;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
