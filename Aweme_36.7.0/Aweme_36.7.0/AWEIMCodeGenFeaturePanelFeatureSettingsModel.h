@class NSString, NSDictionary;

@interface AWEIMCodeGenFeaturePanelFeatureSettingsModel : AWEBaseDataModel

@property (nonatomic) int invokeType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
