@class NSArray, SECURLTrie, NSString;

@interface SECNetRulerDetector : NSObject <SECNetDetector>

@property (copy, nonatomic) NSArray *exemptionHost;
@property (retain, nonatomic) SECURLTrie *exemptionTrie;
@property (copy, nonatomic) NSString *exemptionRule;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) BOOL useRuleV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)doExecution:(id)a0 withSource:(id)a1;
+ (void)initialize;

- (void)setupWithConfig:(id)a0;
- (BOOL)shouldHandle:(id)a0;
- (id)shouldExempt:(id)a0;
- (id)executeFeature:(id)a0 withTraffic:(id)a1;
- (id)executeWithRuleV2:(id)a0;
- (id)tryDetect:(id)a0;
- (id)tryDetect:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
