@class NSString;

@interface ATSBPEASettings : NSObject <AWEAppAwemeSettingMessage>

@property (copy, nonatomic) id /* block */ settingUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)certStatementEnabled;
+ (id)limitConfigs;
+ (BOOL)enableHybridCertContextValidation;
+ (double)hybridCertContextCleaningInterval;
+ (double)hybridCertContextCleaningThreshold;
+ (BOOL)enableRuleValidate;
+ (id)sharedSetting;
+ (id)ruleConfigs;
+ (id)hybridCertConfigs;
+ (id)ABTestDict;
+ (BOOL)blockWhenRuleValidateFail;
+ (BOOL)blockWhenHybridCertRuleFail;
+ (BOOL)blockWhenHybridCertContentFail;
+ (id)enabledHybridCertContextValidationForPageTypes;
+ (id)bpeaCertInfo;
+ (BOOL)actionUnitSwitch;
+ (void)setUpdateBlock:(id /* block */)a0;

- (void)awemeSettingDidChange;
- (void).cxx_destruct;
- (id)init;

@end
