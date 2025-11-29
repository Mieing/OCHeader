@class AWELiveInnerPushContentModel, NSString, AWEButton, UILabel, UIView, UIButton;
@protocol AWELiveUserAvatarPreviewProtocol, AWEInnerNotificationContentOperator, AWEIMStreakDisplayManagerProtocol, AWEFeedLiveMarkViewProtocol;

@interface AWELiveInappPushView : UIView <AWEIMStreakDisplayManagerDelegate, AWEInnerNotificationContent>

@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWEButton *avatarButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *extTagLabel;
@property (retain, nonatomic) UIButton *replyButton;
@property (retain, nonatomic) id<AWELiveUserAvatarPreviewProtocol> avatarPreview;
@property (retain, nonatomic) AWELiveInnerPushContentModel *livePushModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)customIMStreakTextPreferTheme;
- (id)customIMStreakTextFont;
- (void)asyncDidUpdateIMStreakView;
- (void)handleTapAction;
- (BOOL)enablePreview;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (BOOL)hitStreakUpdateExp;
- (BOOL)enableVibrateWhileViewDidAppear;
- (void)__addSubviews;
- (void)updatePushViewWithLivePush:(id)a0 trackID:(id)a1;
- (void)p_updateConsecutiveChatStatusWithPushModel:(id)a0;
- (void)addlivePlayerPreview;
- (void)addQueryItems;
- (long long)p_generateCustomConfigFromPushModel;
- (void)p_layoutPlayWithPush;
- (void)p_layoutTagWithPush;
- (BOOL)enablePlayerReuseWhenEnterRoom;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (id)businessType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
