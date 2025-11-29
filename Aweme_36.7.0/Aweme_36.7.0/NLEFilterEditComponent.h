@class NSString;

@interface NLEFilterEditComponent : NSObject

@property (retain, nonatomic) NSString *category;
@property (nonatomic) double value;
@property (retain, nonatomic) NSString *platform;

+ (id)kTypeName;
+ (id)kLightSensation;
+ (id)kBrightness;
+ (id)kContrast;
+ (id)kSaturation;
+ (id)kOilTexture;
+ (id)kSharp;
+ (id)kStructure;
+ (id)kHighlight;
+ (id)kShadow;
+ (id)kTemperature;
+ (id)kTone;
+ (id)kGrain;
+ (id)kFade;

- (void).cxx_destruct;
- (id)init;

@end
