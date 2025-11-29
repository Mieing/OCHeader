@class NSString, NSArray, AWESettingsMockEnumArray;

@interface AWESettingsDebugMetaData : NSObject

@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSString *serverKey;
@property (nonatomic) BOOL stable;
@property (retain, nonatomic) id defaultData;
@property (copy, nonatomic) NSString *cellTitle;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) long long cellType;
@property (copy, nonatomic) NSArray *owners;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSArray *linesOfBusiness;
@property (copy, nonatomic) NSArray *modules;
@property (retain, nonatomic) AWESettingsMockEnumArray *mockEnums;

- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;

@end
