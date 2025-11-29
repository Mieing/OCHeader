@interface VEAlgorithmSessionResultQrcodeDetect : VEAlgorithmSessionResult

@property (nonatomic) long long retCode;
@property (nonatomic) BOOL isQRCode;
@property (nonatomic) float zoomFactor;
@property (nonatomic) float prob;

@end
