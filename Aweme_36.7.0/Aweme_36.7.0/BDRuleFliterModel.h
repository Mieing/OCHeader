@class NSString, NSDictionary;

@interface BDRuleFliterModel : NSObject

@property (readonly, copy, nonatomic) NSString *strategyKey;
@property (readonly, nonatomic) NSDictionary *strategyFilters;

- (BOOL)checkRuleCludeWithRuleKey:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 key:(id)a1;

@end
