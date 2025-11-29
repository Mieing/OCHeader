@class UIColor, UIFont, CAMediaTimingFunction;

@interface AWEEcomSearchTabBarConfig : NSObject

@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIFont *normalFont;
@property (retain, nonatomic) UIFont *selectedFont;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;
@property (nonatomic) double indicatorWidth;
@property (nonatomic) double indicatorHeight;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;

@end
