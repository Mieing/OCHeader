@class IESMMCurveSource;

@interface IESMMAudioCurveConfig : IESMMAudioEffectConfig

@property (retain, nonatomic) IESMMCurveSource *cureveSource;

- (id)toDicInfo;
- (void)setupDefaultValues;
- (void).cxx_destruct;

@end
