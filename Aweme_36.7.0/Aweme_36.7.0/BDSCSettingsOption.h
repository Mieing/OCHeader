@class BDSCUISettingsOption, NSDictionary, BDSCFeatureSettingsOption;

@interface BDSCSettingsOption : NSObject

@property (retain, nonatomic) BDSCFeatureSettingsOption *featureOption;
@property (retain, nonatomic) BDSCUISettingsOption *uiOption;
@property (copy, nonatomic) NSDictionary *byteCastSetting;

+ (id)optionObjectWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
