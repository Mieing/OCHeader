@class NSDictionary, NSString;

@interface _TTVideoEngineSelectorParams : NSObject

@property (nonatomic) long long expectedBitRate;
@property (nonatomic) long long defaultWifiBitRate;
@property (nonatomic) long long startUpMaxBitrate;
@property (nonatomic) long long cellularMaxBitrate;
@property (nonatomic) long long downgradeBitrate;
@property (nonatomic) long long defaultCellularBitrate;
@property (nonatomic) long long startupMinBitrate;
@property (nonatomic) unsigned long long expectedResolution;
@property (nonatomic) unsigned long long defaultWifiResolution;
@property (nonatomic) unsigned long long startUpMaxResolution;
@property (nonatomic) unsigned long long cellularMaxResolution;
@property (nonatomic) unsigned long long downgradeResolution;
@property (nonatomic) unsigned long long defaultCellularResolution;
@property (nonatomic) unsigned long long startupMinResolution;
@property (copy, nonatomic) NSDictionary *expectedQuality;
@property (copy, nonatomic) NSDictionary *defaultWifiQuality;
@property (copy, nonatomic) NSDictionary *startUpMaxQuality;
@property (copy, nonatomic) NSDictionary *cellularMaxQuality;
@property (copy, nonatomic) NSDictionary *downgradeQuality;
@property (copy, nonatomic) NSDictionary *defaultCellularQuality;
@property (copy, nonatomic) NSDictionary *startUpMinQuality;
@property (nonatomic) int displayWidth;
@property (nonatomic) int displayHeight;
@property (nonatomic) int useCacheMode;
@property (nonatomic) int expectedFitScreenMode;
@property (nonatomic) int startupModel;
@property (nonatomic) float brandWidthFactor;
@property (nonatomic) BOOL useCustomParams;
@property (nonatomic) double firstParam;
@property (nonatomic) double secondParam;
@property (nonatomic) double thirdParam;
@property (nonatomic) double fourthParam;
@property (copy, nonatomic) NSString *pallasVidLabels;

- (void)configPallasVidLabelsWithInfoModel:(id)a0;
- (void)configBitrateWithPlaySource:(id)a0;
- (void)configBitrateWithInfoModel:(id)a0;
- (void)configPallasVidLabelsWithPlaySource:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
