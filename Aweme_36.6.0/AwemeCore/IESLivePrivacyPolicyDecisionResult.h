@class NSString, NSSet;

@interface IESLivePrivacyPolicyDecisionResult : NSObject

@property (readonly, nonatomic) BOOL allowed;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSSet *matchedPolicies;

- (id)initWithAllowed:(BOOL)a0 reason:(id)a1 matchedPolicies:(id)a2;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)description;

@end
