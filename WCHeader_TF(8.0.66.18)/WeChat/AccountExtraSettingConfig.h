@class FinderPrivacySetting, NSMutableArray;

@interface AccountExtraSettingConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *configs;
@property (retain, nonatomic) NSMutableArray *configGroup;
@property (retain, nonatomic) FinderPrivacySetting *privacySetting;

+ (void)initialize;

- (void)setPrivacySetting:(id)a0;
- (id)privacySetting;
- (void)setConfigGroup:(id)a0;
- (id)configGroup;
- (void)setConfigs:(id)a0;
- (id)configs;

@end
