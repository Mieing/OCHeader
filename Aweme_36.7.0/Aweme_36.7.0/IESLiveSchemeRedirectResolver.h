@class NSDictionary, IESLiveSchemeRedirectInfo, NSMutableDictionary;

@interface IESLiveSchemeRedirectResolver : NSObject

@property (copy, nonatomic) NSDictionary *settingConfig;
@property (copy, nonatomic) NSDictionary *geckoConfig;
@property (retain, nonatomic) IESLiveSchemeRedirectInfo *redirectInfo;
@property (retain, nonatomic) NSMutableDictionary *extraEnvInfo;

+ (void)resolveTargetSchemeWith:(id)a0 settingConfig:(id)a1 geckoConfig:(id)a2 completion:(id /* block */)a3;

- (id)initWithSettingConfig:(id)a0 geckoConfig:(id)a1 redirectSchemeExtraParams:(id)a2;
- (void)getResolvedSchemeWith:(id /* block */)a0;
- (void)resolveRedirecrSchemeExtraParams:(id)a0;
- (id)_getResolvedScheme:(id *)a0 ruleType:(long long *)a1 schemeSource:(id *)a2;
- (id)getResolvedSchemeWithConfig:(id)a0 error:(id *)a1 ruleType:(long long *)a2;
- (id)customError:(unsigned long long)a0 userInfo:(id)a1;
- (void)injectExtraEnvInfo:(id)a0 forKey:(id)a1;
- (id)resolveItem:(id)a0 error:(id *)a1 ruleType:(long long *)a2;
- (BOOL)checkVersionRegex:(id)a0;
- (BOOL)isRuleMatchedForVersion:(id)a0 error:(id *)a1;
- (BOOL)isRuleMatchedForTime:(id)a0 error:(id *)a1;
- (BOOL)isRuleMatchedForBlockKeys:(id)a0 error:(id *)a1;
- (BOOL)isRuleMatched:(id)a0 ruleType:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
