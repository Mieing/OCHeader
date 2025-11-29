@class UIColor;

@interface AWEVisitFrequentUserVideoListIndicatorSliderConfig : NSObject

@property (nonatomic) double sliderWidth;
@property (retain, nonatomic) UIColor *sliderBackgroundColor;
@property (retain, nonatomic) UIColor *sliderSelectedColor;
@property (nonatomic) double sliderBorderWidth;
@property (retain, nonatomic) UIColor *sliderBorderColor;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
