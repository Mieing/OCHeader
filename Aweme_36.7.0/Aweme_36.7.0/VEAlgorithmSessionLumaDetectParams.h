@interface VEAlgorithmSessionLumaDetectParams : VECaptureProcessParam

@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned int iso;
@property (nonatomic) unsigned int minIso;
@property (nonatomic) unsigned int maxIso;
@property (nonatomic) unsigned long long detectFrames;

- (id)init;

@end
