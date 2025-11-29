@class BDXSchemaRedirectConfig, BDXSchemaRedirectHostInfo, NSMutableArray;

@interface BDXSchemaRedirectResolver : NSObject

@property (retain, nonatomic) BDXSchemaRedirectConfig *redirectConfig;
@property (retain, nonatomic) BDXSchemaRedirectHostInfo *hostInfo;
@property (retain, nonatomic) NSMutableArray *ruleTypes;

+ (id)resolveSchemaWithSchema:(id)a0 redirectConfig:(id)a1 hostInfo:(id)a2;
+ (void)processResult:(id)a0 withParams:(id)a1;
+ (id)entryConfigToString:(id)a0;
+ (id)convertToFullSchema:(id)a0 schemaParams:(id)a1 urlParams:(id)a2;
+ (id)buildRedirectParamsWithSchema:(id)a0;
+ (id)resolveSchemaWithParams:(id)a0 redirectConfig:(id)a1 hostInfo:(id)a2;
+ (id)getQueryItemsWithQueryString:(id)a0;
+ (long long)ruleTypeFromMatchRule:(id)a0;
+ (BOOL)isRuleMatched:(id)a0 hostInfo:(id)a1;
+ (BOOL)isRuleMatchedForVersion:(id)a0 appVersion:(id)a1;
+ (BOOL)isRuleMatchedForTime:(id)a0;
+ (BOOL)isRuleMatchedForBlockKeys:(id)a0;
+ (BOOL)isValidAppVersion:(id)a0;

- (id)initWithRedirectConfig:(id)a0 hostInfo:(id)a1;
- (id)resolveSchemaWithMatchRules:(id)a0;
- (id)resolveSchemaWithMatchRule:(id)a0;
- (void).cxx_destruct;

@end
