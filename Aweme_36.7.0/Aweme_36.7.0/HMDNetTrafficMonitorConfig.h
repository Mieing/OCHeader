@class NSDictionary;

@interface HMDNetTrafficMonitorConfig : HMDMonitorConfig

@property (nonatomic) BOOL enableIntervalTraffic;
@property (nonatomic) BOOL enableBizTrafficCollect;
@property (nonatomic) BOOL enableExceptionDetailUpload;
@property (nonatomic) BOOL disableNetworkTraffic;
@property (nonatomic) BOOL disableTTPushTraffic;
@property (nonatomic) int highFreqRequestThreshold;
@property (nonatomic) unsigned long long intervalTrafficThreshold;
@property (nonatomic) unsigned long long backgroundTrafficThreshold;
@property (nonatomic) unsigned long long neverFrontTrafficThreshold;
@property (nonatomic) unsigned long long largeRequestThreshold;
@property (nonatomic) unsigned long long largeImageThreshold;
@property (retain, nonatomic) NSDictionary *customTrafficSpanSample;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (void).cxx_destruct;

@end
