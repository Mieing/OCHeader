@class NSArray;

@interface AWEDCFeedGradientBGViewConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL useGradientBGView;
@property (copy, nonatomic) NSArray *gradientBGViewGradientColors;
@property (copy, nonatomic) id /* block */ gradientBGViewGradientColorsBlock;
@property (nonatomic) double gradientBGViewTopPadding;
@property (nonatomic) double gradientBGViewAdditionalHeight;
@property (nonatomic) double gradientBGViewCustomHeight;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
