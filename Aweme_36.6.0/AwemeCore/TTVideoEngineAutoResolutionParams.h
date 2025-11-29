@class NSDictionary;

@interface TTVideoEngineAutoResolutionParams : NSObject

@property (nonatomic) int displayWidth;
@property (nonatomic) int displayHeight;
@property (nonatomic) unsigned long long useCacheMode;
@property (nonatomic) unsigned long long fitScreenMode;
@property (nonatomic) unsigned long long expectedResolution;
@property (nonatomic) unsigned long long defaultWifiResolution;
@property (nonatomic) unsigned long long startUpMaxResolution;
@property (nonatomic) unsigned long long cellularMaxResolution;
@property (nonatomic) unsigned long long downgradeResolution;
@property (nonatomic) unsigned long long defaultCellularResolution;
@property (nonatomic) unsigned long long startupMinResolution;
@property (nonatomic) unsigned long long startupModel;
@property (nonatomic) float brandwidthFactor;
@property (nonatomic) BOOL useCustomStartupParams;
@property (nonatomic) double firstStartupParam;
@property (nonatomic) double secondStartupParam;
@property (nonatomic) double thirdStartupParam;
@property (nonatomic) double fourthStartupParam;
@property (copy, nonatomic) NSDictionary *expectedQuality;
@property (copy, nonatomic) NSDictionary *defaultWifiQuality;
@property (copy, nonatomic) NSDictionary *startUpMaxQuality;
@property (copy, nonatomic) NSDictionary *cellularMaxQuality;
@property (copy, nonatomic) NSDictionary *downgradeQuality;
@property (copy, nonatomic) NSDictionary *defaultCellularQuality;
@property (copy, nonatomic) NSDictionary *startupMinQuality;

- (void).cxx_destruct;
- (id)init;

@end
