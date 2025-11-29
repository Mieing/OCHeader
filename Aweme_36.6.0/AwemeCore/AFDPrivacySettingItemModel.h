@class NSString;

@interface AFDPrivacySettingItemModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long settingItemType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) BOOL isSecondary;

+ (long long)settingItemTypeWithKey:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
