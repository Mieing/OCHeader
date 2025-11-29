@class MMFinderLiveConnectMicUser, MMUIButton, UILabel, MMFinderLiveTaskId, MMLiveRewardGiftNotificationContainerView, UIView, UIColor, NSString, FinderLiveContact, MMFinderLiveAudioRoomMicAudioAnimationView, MMFinderLiveRedPacketView, WCFinderHeadImageView, WCFinderContact;
@protocol MMLiveKtvUserViewDelegate;

@interface MMLiveKtvUserView : MMFinderLiveKTVBaseView <WCFinderHeadImageViewDelegate, MMFinderLiveRedPacketViewModelObserver, MMFinderLiveKTVUIExt>

@property (retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId;
@property (nonatomic) unsigned long long viewScene;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) FinderLiveContact *userContact;
@property (retain, nonatomic) WCFinderContact *finderContact;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *micUserInfo;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) WCFinderHeadImageView *userAvatarView;
@property (retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *audioAnimationView;
@property (retain, nonatomic) UIColor *audioWaveColor;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *micMutedButton;
@property (retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView;
@property (retain, nonatomic) UIView *heatValueContainerView;
@property (retain, nonatomic) UILabel *heatValueLabel;
@property (nonatomic) unsigned long long currHeatValue;
@property (retain, nonatomic) UIView *redPacketContainerView;
@property (retain, nonatomic) MMFinderLiveRedPacketView *redPacketAnimationView;
@property (nonatomic) BOOL userTalking;
@property (weak, nonatomic) id<MMLiveKtvUserViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferExtraHeight:(BOOL)a0;
+ (double)secondLineTopMarginNew:(BOOL)a0;

- (id)initWithTaskId:(id)a0 displayScenario:(unsigned long long)a1;
- (void)registerExtensions;
- (id)getLiveTask;
- (BOOL)isAdminMode;
- (void)layoutSubviews;
- (void)layoutAvatarViews;
- (void)layoutTitleLabelAndMuteButton;
- (BOOL)isViewAtFirstLineVisible;
- (void)layoutHeatValueAndRedPacketView;
- (void)layoutGiftNotificationContainerView;
- (void)onAvatarTapped;
- (void)onClickMicMutedButton;
- (void)onTapHeatValue;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)a0 image:(id)a1 urlString:(id)a2;
- (void)redPacketViewModel:(id)a0 hiddenDidChange:(BOOL)a1;
- (void)onLiveKTVMainWidgetColorUpdate:(id)a0 taskId:(id)a1;
- (void)onLiveKTVUserHeatValueUpdate:(id)a0 withMicUserInfo:(id)a1 taskId:(id)a2;
- (void)updateMicUserInfo:(id)a0 userId:(id)a1;
- (void)updateUserContact:(id)a0 userId:(id)a1;
- (void)updateUserFinderContact:(id)a0 userId:(id)a1;
- (void)clearStates;
- (void)updateFinderContact:(id)a0;
- (id)getGiftNotificationContainerView;
- (id)currUserId;
- (void)updateMicMutedBtnHiddenWithRefreshUI;
- (void)checkUserIdWithUpdate:(id)a0;
- (void)checkUserNameWithUpdate:(id)a0;
- (void)refreshUI;
- (void)initializeComponents;
- (void)initAvatarViews;
- (void)initTitleLabel;
- (BOOL)shouldCreateMicMutedButton;
- (void)initMicMutedButton;
- (void)initHeatValueViews;
- (void)initRedPacketView;
- (void)initGiftNotificationContainerView;
- (BOOL)isAvatarRounded;
- (BOOL)shouldShowRedPacketView;
- (void)updateRedPacketViews;
- (void)updateHeatValueLabel;
- (BOOL)updateMicMutedButtonHidden;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
