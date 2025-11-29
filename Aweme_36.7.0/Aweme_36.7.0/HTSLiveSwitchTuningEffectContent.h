@class NSString;

@interface HTSLiveSwitchTuningEffectContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *toEffectName;

+ (id)descriptor;

@end
