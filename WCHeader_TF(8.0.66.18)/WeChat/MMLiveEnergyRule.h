@class NSString, MMLiveEnergyRuleConditions, MMLiveEnergyRuleAdjustments;

@interface MMLiveEnergyRule : NSObject

@property (copy, nonatomic) NSString *ruleID;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) MMLiveEnergyRuleConditions *conditions;
@property (nonatomic) BOOL forcesHit;
@property (readonly, nonatomic) MMLiveEnergyRuleAdjustments *adjustments;

+ (id)ruleFromDictionaryInfo:(id)a0;
+ (id)_dictionary:(id)a0 longLongNumberForKey:(id)a1;
+ (id)_dictionary:(id)a0 floatNumberForKey:(id)a1;
+ (id)_dictionary:(id)a0 numberArrayForKey:(id)a1;
+ (BOOL)_array:(id)a0 containsLongValue:(long long)a1;

- (id)init;
- (id)generateDictionaryInfo;
- (BOOL)hitTestMetricsInfo:(id)a0;
- (BOOL)shouldAdjustCameraCapture;
- (BOOL)shouldAdjustVideoEncode;
- (void).cxx_destruct;

@end
