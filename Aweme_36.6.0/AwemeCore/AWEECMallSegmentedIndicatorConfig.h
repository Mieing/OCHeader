@class UIColor;

@interface AWEECMallSegmentedIndicatorConfig : NSObject

@property (nonatomic) long long showStyle;
@property (nonatomic) long long widthStyle;
@property (nonatomic) long long position;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double height;
@property (nonatomic) double verticalMargin;
@property (nonatomic) double fixedWidth;
@property (nonatomic) struct AWEECMallSegmentedControlInsets { double left; double right; } margin;
@property (nonatomic) double cornerRadius;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
