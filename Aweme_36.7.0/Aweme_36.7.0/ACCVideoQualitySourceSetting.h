@class NSArray, NSString, ACCVideoQualitySetting, ACCVideoQualitySourceSettingPayload;

@interface ACCVideoQualitySourceSetting : NSObject

@property (retain, nonatomic) ACCVideoQualitySourceSetting *superSetting;
@property (copy, nonatomic) NSArray *sourceStrategies;
@property (copy, nonatomic) NSArray *basicSettings;
@property (copy, nonatomic) NSArray *strategies;
@property (copy, nonatomic) NSString *sourceName;
@property (retain, nonatomic) ACCVideoQualitySetting *sourceBasicSetting;
@property (retain, nonatomic) ACCVideoQualitySourceSettingPayload *payload;

+ (id)modelPropertyBlacklist;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
