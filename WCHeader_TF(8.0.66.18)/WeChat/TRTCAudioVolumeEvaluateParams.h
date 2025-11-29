@interface TRTCAudioVolumeEvaluateParams : NSObject <NSCopying>

@property (nonatomic) unsigned long long interval;
@property (nonatomic) BOOL enableVadDetection;
@property (nonatomic) BOOL enablePitchCalculation;
@property (nonatomic) BOOL enableSpectrumCalculation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
