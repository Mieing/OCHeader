@class UIColor;

@interface IESSegmentedIndicatorConfig : NSObject

@property (nonatomic) long long widthStyle;
@property (nonatomic) long long position;
@property (nonatomic) long long zPosition;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double height;
@property (nonatomic) double verticalMargin;
@property (nonatomic) double fixedWidth;
@property (nonatomic) struct IESSegmentedControlInsets { double left; double right; } margin;
@property (nonatomic) double cornerRadius;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
