@class NSMutableDictionary;

@interface IESLivePrivacyPolicyRepository : NSObject <IESLivePrivacyPolicyRepositoryProtocol>

@property (retain, nonatomic) NSMutableDictionary *policiesByType;
@property (retain, nonatomic) NSMutableDictionary *activatedTokens;

- (void)registerPolicy:(id)a0 withType:(id)a1;
- (void)registerPolicies:(id)a0 withType:(id)a1;
- (id)activatePolicyById:(id)a0 withType:(id)a1;
- (id)activatePoliciesWithCategory:(id)a0 withType:(id)a1;
- (void)deactivatePolicyWithToken:(id)a0;
- (void)deactivatePolicyById:(id)a0 withType:(id)a1;
- (void)deactivatePolicyWithCategory:(id)a0 withType:(id)a1;
- (id)getPoliciesByType:(id)a0;
- (id)getActivatedPoliciesByType:(id)a0;
- (void)cleanInvalidTokens;
- (id)getPoliciesByType:(id)a0 category:(id)a1;
- (id)getActivatedPoliciesByType:(id)a0 category:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
