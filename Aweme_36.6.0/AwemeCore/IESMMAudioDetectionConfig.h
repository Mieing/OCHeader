@class IESMMAudioDetection;

@interface IESMMAudioDetectionConfig : IESMMAudioEffectConfig

@property (nonatomic) float peak;
@property (nonatomic) float loudness;
@property (retain, nonatomic) IESMMAudioDetection *detection;

- (id)toDicInfo;
- (float)fetchResultPeak;
- (float)fetchResultLoudness;
- (void)setupDefaultValues;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
