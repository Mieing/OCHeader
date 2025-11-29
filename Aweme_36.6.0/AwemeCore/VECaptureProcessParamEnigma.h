@class NSString;

@interface VECaptureProcessParamEnigma : VECaptureProcessParam

@property (retain, nonatomic) NSString *graphConfig;
@property (nonatomic) unsigned long long enableCodeTypes;
@property (nonatomic) int frameNum;
@property (nonatomic) int enigmaSource;
@property (nonatomic) int scanCodeBehavior;
@property (nonatomic) BOOL enableMultiCode;
@property (nonatomic) BOOL isScript;
@property (nonatomic) void /* function */ *model_resource_finder_t;

- (void).cxx_destruct;
- (id)init;

@end
