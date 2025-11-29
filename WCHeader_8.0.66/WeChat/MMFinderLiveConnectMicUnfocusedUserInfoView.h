@class NSString, MMLiveRewardGiftNotificationContainerView, PAGView, MMLiveViewHiddenStatusContainer, UIView, UILabel, MMFinderLiveClockCountdownView;

@interface MMFinderLiveConnectMicUnfocusedUserInfoView : MMFinderLiveConnectMicBaseUserInfoView <MMLiveRewardGiftNotificationContainerViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) PAGView *volumeAnimationView;
@property (retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView;
@property (retain, nonatomic) UIView *heatValueLabelContainerView;
@property (retain, nonatomic) UILabel *heatValueLabel;
@property (weak, nonatomic) MMLiveViewHiddenStatusContainer *hiddenStatusContainer;
@property (retain, nonatomic) MMFinderLiveClockCountdownView *paidMicCountdownView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getPaidMicCountdownView;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)a0;
- (void)hideNonEssentialViewsWithHiddenStatusContainer:(id)a0;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)a0;
- (void)onConnectMicUserHasChanged;
- (void)layoutUI;
- (void)createHeadImageView;
- (void)createNickNameLabel;
- (void)configNicknameLabel;
- (BOOL)needDisplayGlobalRankSignView;
- (BOOL)needDisplayAnonymousSignView;
- (unsigned long long)viewType;
- (void)updateSmallWidgetsHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)onLiveRewardGiftNotificationContainerViewWillShowGift:(id)a0;
- (void)onLiveRewardGiftNotificationContainerViewDidHideGift:(id)a0;
- (void)configVolumeAnimationView;
- (void)createMicMutedButton;
- (void)configGiftContainerView;
- (void)layoutComponentsForAudienceVideoMode;
- (void)layoutComponentsForAudienceAudioMode;
- (void)layoutComponentsForAnchorVideoMode;
- (void)layoutComponentsForAnchorAudioMode;
- (void)layoutNicknameLabelForAnchorWithAudioModeFlag:(BOOL)a0;
- (void)updateMicMutedButtonAppearance;
- (void)configHeatValueLabel;
- (id)liveTask;
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)a0 sdkUserId:(id)a1;
- (void)updatePaidCountdownViewWithTime:(unsigned long long)a0;
- (void).cxx_destruct;

@end
