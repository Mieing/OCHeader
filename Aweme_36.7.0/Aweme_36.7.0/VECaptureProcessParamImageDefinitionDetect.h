@class NSString;

@interface VECaptureProcessParamImageDefinitionDetect : VECaptureProcessParam

@property (retain, nonatomic) NSString *modelPath;
@property (retain, nonatomic) NSString *kernelBinPath;
@property (nonatomic) int backendType;
@property (nonatomic) float numThread;
@property (nonatomic) int runtype;
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float threshold;
@property (retain, nonatomic) NSString *tempDirPath;

- (void).cxx_destruct;
- (id)init;

@end
