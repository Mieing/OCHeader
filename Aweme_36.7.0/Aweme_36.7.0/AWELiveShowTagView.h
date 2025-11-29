@class UILabel, AWEGradientView;

@interface AWELiveShowTagView : UIView

@property (retain, nonatomic) UILabel *paidTagLabel;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UILabel *paidLabel;
@property (retain, nonatomic) UILabel *replayLabel;
@property (retain, nonatomic) UILabel *livingLabel;
@property (retain, nonatomic) AWEGradientView *livingContainerView;
@property (nonatomic) BOOL isPremiere;
@property (nonatomic) long long viewSize;
@property (nonatomic) long long tagType;
@property (nonatomic) long long paidTagType;
@property (nonatomic) long long enlargeType;

- (void)removeAllSubViews;
- (double)currentPaidTagWidth;
- (void)updateCountDownLabel:(double)a0;
- (double)adaptLargeFontModeForContainerWidth:(double)a0;
- (void)tagTypeNone;
- (void)tagTypeLive;
- (void)tagTypePlayback;
- (void)tagTypePaidDefault;
- (void)tagTypePaidUnpaidTrialLive;
- (void)tagTypePaidUnpaidTrialPlayback;
- (void)tagTypePaidHasPaid;
- (void)tagTypePaidHasPaidLive;
- (void)tagTypePaidHasPaidPlayback;
- (void)tagTypePaidUnpaidTrialLiveDefault;
- (void)tagTypePaidUnpaidTrialPlaybackDefault;
- (double)adaptLargeFontModeForContainerHeight:(double)a0;
- (double)adaptLargeFontMode:(double)a0;
- (id)adaptLargeFontModeOfClass:(long long)a0 weight:(long long)a1;
- (id)livingTagText;
- (id)livingViewGradientColors;
- (void)showFinalView;
- (void).cxx_destruct;

@end
