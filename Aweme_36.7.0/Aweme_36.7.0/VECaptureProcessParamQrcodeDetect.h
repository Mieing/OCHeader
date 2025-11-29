@class NSString;

@interface VECaptureProcessParamQrcodeDetect : VECaptureProcessParam

@property (retain, nonatomic) NSString *graphConfig;
@property (nonatomic) int frameNum;
@property (nonatomic) float threshold;
@property (nonatomic) int timeout;
@property (nonatomic) BOOL isForScan;
@property (nonatomic) BOOL enableZoomBehavior;
@property (nonatomic) float needZoomFactorToFrameHeight;
@property (nonatomic) float maxFactorToFrameHeight;
@property (nonatomic) struct { float top; float bottom; float left; float right; float percent; } qrcodeZoomAOI;
@property (nonatomic) float maxZoomFactor;

- (void).cxx_destruct;
- (id)init;

@end
