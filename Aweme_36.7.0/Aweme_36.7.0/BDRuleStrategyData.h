@class NSDictionary, NSString;

@interface BDRuleStrategyData : NSObject <BDPolicyEventSupplementary>

@property (copy, nonatomic) NSDictionary *dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventSupplementary;
- (void).cxx_destruct;

@end
