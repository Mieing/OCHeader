@class NSString, VECaptureProcessParam;

@interface VEAlgorithmSessionParamsCameraProcessParams : NSObject

@property (nonatomic) int processType;
@property (retain, nonatomic) NSString *graph_config_path;
@property (nonatomic) BOOL enabled;
@property (nonatomic) float framteRate;
@property (nonatomic) BOOL flag1;
@property (retain, nonatomic) id callback1;
@property (copy, nonatomic) id callback4;
@property (retain, nonatomic) id callback2;
@property (retain, nonatomic) id callback3;
@property (retain, nonatomic) VECaptureProcessParam *param;

- (void).cxx_destruct;
- (id)init;

@end
