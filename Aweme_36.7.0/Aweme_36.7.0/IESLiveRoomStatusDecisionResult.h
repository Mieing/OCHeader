@class NSSet, IESLiveRoomStateUpdateRequest;

@interface IESLiveRoomStatusDecisionResult : IESLivePrivacyPolicyDecisionResult

@property (nonatomic) long long affectedStrategy;
@property (retain, nonatomic) NSSet *affectedResources;
@property (readonly, nonatomic) IESLiveRoomStateUpdateRequest *request;

- (id)initWithAllowed:(BOOL)a0 reason:(id)a1 matchedPolicies:(id)a2 affectedStrategy:(long long)a3 affectedResources:(id)a4 request:(id)a5;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)description;

@end
