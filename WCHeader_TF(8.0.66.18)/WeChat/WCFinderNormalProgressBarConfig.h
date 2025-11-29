@class UIColor, UIImage;

@interface WCFinderNormalProgressBarConfig : WCFinderProgressBarConfig

@property (retain, nonatomic) UIColor *defaultColor;
@property (retain, nonatomic) UIColor *inProgressColor;
@property (readonly, nonatomic) UIColor *inProgressColorInLargeState;
@property (nonatomic) double dotSize;
@property (readonly, nonatomic) double dotSizeInLargeState;
@property (retain, nonatomic) UIColor *dotColor;
@property (readonly, nonatomic) UIColor *dotColorInLargeState;
@property (nonatomic) double barHeight;
@property (readonly, nonatomic) double barHeightInLargeState;
@property (retain, nonatomic) UIImage *progressBarIconImage;
@property (nonatomic) BOOL barCornerRounded;
@property (nonatomic) BOOL enablePanProgessIcon;
@property (nonatomic) BOOL dragShowLargebar;

+ (id)defaultConfig;

- (void)setBarHeight:(double)a0 inLargeState:(double)a1;
- (void)setDotSize:(double)a0 inLargeState:(double)a1;
- (void)setDotColor:(id)a0 inLargeState:(id)a1;
- (void)setInProgressColor:(id)a0 inLargeState:(id)a1;
- (void).cxx_destruct;

@end
