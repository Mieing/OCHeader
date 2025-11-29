@class MMLiveViewHiddenStatusContainer, PAGView, UILabel, UIView, MMFinderLiveClockCountdownView;

@interface MMFinderLiveConnectMicFocusedUserInfoView : MMFinderLiveConnectMicBaseUserInfoView

@property (retain, nonatomic) PAGView *volumeAnimationView;
@property (retain, nonatomic) UIView *heatValueLabelContainerView;
@property (retain, nonatomic) UILabel *heatValueLabel;
@property (weak, nonatomic) MMLiveViewHiddenStatusContainer *hiddenStatusContainer;
@property (retain, nonatomic) MMFinderLiveClockCountdownView *paidMicCountdownView;

- (id)init;
- (id)getPaidMicCountdownView;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)a0;
- (void)updateUserGlobalBadgeLevel:(unsigned int)a0;
- (void)hideNonEssentialViewsWithHiddenStatusContainer:(id)a0;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)a0;
- (void)onConnectMicUserHasChanged;
- (void)layoutUI;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)createHeadImageView;
- (void)createNickNameLabel;
- (BOOL)needDisplayGlobalRankSignView;
- (BOOL)needDisplayAnonymousSignView;
- (void)configGlobalRankSignView;
- (unsigned long long)viewType;
- (void)updateSmallWidgetsHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)configVolumeAnimationView;
- (BOOL)useCenterLayoutMode;
- (void)layoutInCenterMode;
- (void)updateMicMutedButtonAppearance;
- (void)configHeatValueLabel;
- (id)liveTask;
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)a0 sdkUserId:(id)a1;
- (void)updatePaidCountdownViewWithTime:(unsigned long long)a0;
- (void).cxx_destruct;

@end
