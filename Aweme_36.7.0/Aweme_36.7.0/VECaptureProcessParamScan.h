@interface VECaptureProcessParamScan : VECaptureProcessParam

@property (nonatomic) int scanType;
@property (nonatomic) float scriptTimeout;
@property (nonatomic) int maxObjNum;
@property (nonatomic) int maxTrackNum;

- (id)init;

@end
