@class NSSet, IESLivePrivacyContext, IESLivePrivacyPolicyRepository, NSHashTable, NSString;

@interface IESLivePrivacyRepositoryService : IESLiveGeneralBaseService <IESLivePrivacyRepository>

@property (retain, nonatomic) IESLivePrivacyContext *context;
@property (retain, nonatomic) IESLivePrivacyPolicyRepository *repository;
@property (nonatomic) unsigned long long currentSceneType;
@property (readonly, nonatomic) NSSet *avResourcePolicies;
@property (readonly, nonatomic) NSSet *roomStatePolicies;
@property (readonly, nonatomic) NSSet *activatedRoomStatePolicies;
@property (readonly, nonatomic) NSHashTable *activatedroomStateTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (void)registerContextProvider:(id)a0;
- (void)registerAVResourcePolicies:(id)a0;
- (void)registerRoomStatePolicies:(id)a0;
- (id)activateRoomStatePoliciesById:(id)a0;
- (id)activateRoomStatePoliciesById:(id)a0 contextProvider:(id)a1;
- (id)activateRoomStatePoliciesWithCategory:(id)a0;
- (id)activateRoomStatePoliciesWithCategory:(id)a0 contextProvider:(id)a1;
- (void)deactivateRoomStatePolicyWithToken:(id)a0;
- (void)deactivateRoomStatePolicyById:(id)a0;
- (void)deactivateRoomStatePoliciesWithCategory:(id)a0;
- (void)registerAudiencePolicies;
- (void)registerAnchorPolicies;
- (void)registerAnchorGuidePolicies;
- (void)registerMediaAnchorPreviewPolicies;
- (void)registerPreviewPolicies;
- (void)registerDynamicPolicies;
- (id)activatedRoomStateTokens;
- (void).cxx_destruct;

@end
