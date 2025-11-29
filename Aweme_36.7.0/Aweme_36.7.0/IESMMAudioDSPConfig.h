@class NSString;

@interface IESMMAudioDSPConfig : IESMMAudioEffectConfig

@property (copy, nonatomic) NSString *effectPath;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
