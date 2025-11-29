@protocol IESLiveEffectPlatformConfig;

@interface EffectPlatformLaunchInstance : NSObject

@property (retain, nonatomic) id<IESLiveEffectPlatformConfig> config;
@property (nonatomic) BOOL configured;

+ (id)sharedInstance;

- (void)prepareDiff;
- (void).cxx_destruct;
- (void)prepare;

@end
