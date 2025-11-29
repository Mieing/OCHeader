@interface VECaptureProcessParamShakingDetect : VECaptureProcessParam

@property (nonatomic) float threshold;
@property (nonatomic) int stabilityCalNum;
@property (nonatomic) float stabilityHighThreshold;
@property (nonatomic) float stabilityLowThreshold;
@property (nonatomic) float buffersize;
@property (nonatomic) BOOL sensorDrive;
@property (copy, nonatomic) id /* block */ stabilityCallback;
@property (copy, nonatomic) id /* block */ resetCallback;
@property (nonatomic) BOOL bizSensorDataDrive;

- (void).cxx_destruct;
- (id)init;

@end
