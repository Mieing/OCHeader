@class IESLiveAVResourceRequest;

@interface IESLiveAVResourceDecisionResult : IESLivePrivacyPolicyDecisionResult

@property (readonly, nonatomic) IESLiveAVResourceRequest *request;

+ (id)denyBecauseInvalidRequest;

- (id)initWithRequest:(id)a0 allowed:(BOOL)a1 reason:(id)a2 matchedPolicies:(id)a3;
- (void).cxx_destruct;
- (id)toDictionary;

@end
