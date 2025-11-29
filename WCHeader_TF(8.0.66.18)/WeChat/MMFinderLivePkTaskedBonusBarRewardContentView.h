@class UIColor, MMTimer, NSNumberFormatter, NSString, UILabel, UIView, MMFinderLivePkTaskedBonusModel;

@interface MMFinderLivePkTaskedBonusBarRewardContentView : UIView <MMFinderLivePkTaskedBonusBarHighlightedContentView>

@property (retain, nonatomic) UIView *scalingContainerView;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusModel *model;
@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) NSNumberFormatter *multiplierFormatter;
@property (nonatomic) double pointOfInterestInLabel;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } highlightedPointOfInterest;
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
