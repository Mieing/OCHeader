@class UIColor, UIView, NSArray, NSString, MMFinderLivePkTaskedBonusModel, MMFinderLiveSpinnerLabel, UILabel, MMTimer;

@interface MMFinderLivePkTaskedBonusBarProgressContentView : UIView <MMFinderLivePkTaskedBonusBarContentView>

@property (retain, nonatomic) UIView *scalingContainerView;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) MMFinderLiveSpinnerLabel *progressLabel;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusModel *model;
@property (retain, nonatomic) NSArray *progressItems;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) unsigned long long elapsedTime;
@property (readonly, nonatomic) UIColor *contentShadowColor;
@property (readonly, nonatomic) NSString *currentPreferredGiftId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onTimerTick;
- (void)layoutSubviews;
- (unsigned long long)currentCountdownSeconds;
- (void).cxx_destruct;

@end
