@class UIView, MMUIButton, MMFinderLiveConnectMicUser, PAGView, UIImageView, MMLiveTaskId, MMFinderLiveClockCountdownView, UILabel;
@protocol MMFinderLiveConnectMicFocusedVideoHeaderViewDelegate;

@interface MMFinderLiveConnectMicFocusedVideoHeaderView : UIView

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) UIImageView *connectMicIconView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIView *heatValueLabelContainerView;
@property (retain, nonatomic) UILabel *heatValueLabel;
@property (retain, nonatomic) UIView *audioModeIconContainerView;
@property (retain, nonatomic) UIImageView *audioModeIconView;
@property (retain, nonatomic) MMUIButton *micMutedButton;
@property (retain, nonatomic) PAGView *soundIndicatorView;
@property (retain, nonatomic) MMFinderLiveClockCountdownView *paidMicCountdownView;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo;
@property (weak, nonatomic) id<MMFinderLiveConnectMicFocusedVideoHeaderViewDelegate> delegate;
@property (nonatomic) BOOL showSoundIndicator;
@property (readonly, nonatomic) BOOL containsVisibleComponents;

+ (double)minHeight;
+ (double)maxWidthWithSuperviewWidth:(double)a0 leftMargin:(double)a1 taskId:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithConnectMicUser:(id)a0 taskId:(id)a1;
- (id)getPaidMicCountdownView;
- (void)updateForAnchorOfTaskId:(id)a0;
- (void)updateAudioModeIconAppearance;
- (void)updateMicMutedButtonAppearance;
- (void)updateLiveHeatValue;
- (unsigned long long)currentHeatValue;
- (void)updateNickname;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onTapped;
- (void)onClickMicMutedButton;
- (void)initAudioModeIcon;
- (void)initMicMutedButton;
- (void)updateSoundIndicatorVisibility;
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)a0 sdkUserId:(id)a1;
- (void)updatePaidCountdownViewWithTime:(unsigned long long)a0;
- (id)liveTask;
- (BOOL)isFeedStreamTask;
- (void).cxx_destruct;

@end
