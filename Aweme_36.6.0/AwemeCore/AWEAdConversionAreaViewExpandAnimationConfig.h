@interface AWEAdConversionAreaViewExpandAnimationConfig : NSObject

@property (nonatomic) double backgroundDelayTime;
@property (nonatomic) double backgroundDuration;
@property (nonatomic) double titleDelayTime;
@property (nonatomic) double titleDuration;
@property (nonatomic) double descDelayTime;
@property (nonatomic) double descDuration;
@property (nonatomic) double actionButtonDelayTime;
@property (nonatomic) double actionButtonDuration;
@property (nonatomic) BOOL iconAnimationEnable;
@property (nonatomic) double iconDelayTime;
@property (nonatomic) double iconDuration;

+ (id)defaultConfig;

- (id)init;

@end
