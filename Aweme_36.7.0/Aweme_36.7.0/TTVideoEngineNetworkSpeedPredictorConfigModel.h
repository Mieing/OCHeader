@interface TTVideoEngineNetworkSpeedPredictorConfigModel : NSObject

@property (nonatomic) long long singleSpeedInterval;
@property (nonatomic) long long mutilSpeedInterval;
@property (nonatomic) long long speedOutputType;
@property (nonatomic) BOOL enableReport;
@property (nonatomic) long long maxWindowSize;
@property (nonatomic) long long samplingRate;

@end
