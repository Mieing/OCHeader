@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface AFDColorRingOnboardingAnimationShowRuleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *rules;
@property (retain, nonatomic) NSMutableArray *showCountCache;
@property (retain, nonatomic) NSDictionary *onboardingConfig;

+ (id)sharedManager;

- (void)p_setupOnboardingConfigRules;
- (id)generateOnboardingGroupIDWithScene:(id)a0;
- (id)generateOnboardingRuleIDWithRuleType:(id)a0 groupID:(id)a1;
- (void)p_setupRulesForScene:(id)a0 ruleModel:(id)a1;
- (id)defaultFrequencyGroupForPersonalHomepageProfile;
- (id)defaultFrequencyGroupForHomepageFamiliarProfile;
- (id)defaultFrequencyGroupForHomepageHotProfile;
- (id)defaultFrequencyGroupForOtherHomepageProfile;
- (BOOL)canShowInScene:(id)a0;
- (void)recordShowInScene:(id)a0;
- (void)recordClickInScene:(id)a0;
- (void)resetFrequencyRulesForScene:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
