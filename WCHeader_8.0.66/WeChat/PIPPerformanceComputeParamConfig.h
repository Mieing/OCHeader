@interface PIPPerformanceComputeParamConfig : NSObject

@property (nonatomic) int fpsPerformanceSwitch;
@property (nonatomic) double largeFPSDifference;
@property (nonatomic) double lessFPSDifference;
@property (nonatomic) int topFPSDifferenceListCnt;
@property (nonatomic) int topFPSLimit;
@property (nonatomic) double computeResultDifferenceTime;

+ (id)createParamConfigWithDict:(id)a0;

@end
