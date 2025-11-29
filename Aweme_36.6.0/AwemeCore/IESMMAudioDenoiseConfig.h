@class NSString;

@interface IESMMAudioDenoiseConfig : IESMMAudioEffectConfig

@property (nonatomic) float algoType;
@property (copy, nonatomic) NSString *modelPath;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (void).cxx_destruct;

@end
