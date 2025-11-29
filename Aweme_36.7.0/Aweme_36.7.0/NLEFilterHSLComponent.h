@interface NLEFilterHSLComponent : NSObject

@property (nonatomic) long long colorMode;
@property (nonatomic) double hue;
@property (nonatomic) double saturation;
@property (nonatomic) double brightness;

+ (id)kTypeName;
+ (long long)ColorModeCount;
+ (id)Color_Mode;
+ (id)Hue;
+ (id)Saturation;
+ (id)Brightness;

- (id)init;

@end
