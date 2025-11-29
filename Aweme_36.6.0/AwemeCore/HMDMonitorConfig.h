@class NSDictionary;

@interface HMDMonitorConfig : HMDModuleConfig

@property (nonatomic) float flushInterval;
@property (nonatomic) float flushCount;
@property (nonatomic) float refreshInterval;
@property (retain, nonatomic) NSDictionary *customEnableUpload;
@property (nonatomic) BOOL customOpenEnabled;
@property (retain, nonatomic) NSDictionary *customOpenScene;

+ (id)hmd_attributeMapDictionary;

- (void).cxx_destruct;
- (BOOL)canStart;

@end
