@class UIColor, NSString, UIView, NSNumber;

@interface AWEStudioEditPlayControlFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (readonly, copy, nonatomic) NSNumber *playControlOffset;
@property (copy, nonatomic) NSNumber *progressBarUnderHeightValue;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *progressMinimumTrackColor;
@property (retain, nonatomic) UIColor *progressMaximumTrackColor;
@property (nonatomic) double pauseButtonRight;
@property (nonatomic) double pauseButtonBottom;
@property (nonatomic) double pauseButtonWH;
@property (copy, nonatomic) NSString *pauseButtonPauseIcon;
@property (copy, nonatomic) NSString *pauseButtonPlayIcon;
@property (retain, nonatomic) UIView *pauseButtonBGView;
@property (retain, nonatomic) NSNumber *progressLabelBottomOffset;
@property (retain, nonatomic) NSNumber *progressLabelFontSize;
@property (retain, nonatomic) NSNumber *progressSliderHorizontalInset;
@property (nonatomic) BOOL hiddenProgressThumbView;
@property (retain, nonatomic) NSNumber *indicatorBottomOffset;
@property (retain, nonatomic) NSNumber *indicatorHorizontalInset;

- (void)adjustToolBarBottomStyle;
- (void).cxx_destruct;

@end
