@class AWERouterAbilityManager, NSDictionary, NSString, ACCRecordViewControllerInputData;

@interface AWERouterMultiAbilityService : NSObject <AWEStudioMultiAbilityService>

@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWERouterAbilityManager *abilityManager;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addAbilityWithMusicID:(id)a0;
- (id)addAbilityWithMusic:(id)a0;
- (id)addAbilityWithPropIDs:(id)a0;
- (id)addAbilityWithChallengeIds:(id)a0;
- (id)addAbilityWithMissionModel:(id)a0;
- (id)addAbilityWithcommercialAnchorModel:(id)a0;
- (id)addAbilityWithActivityParams:(id)a0;
- (id)addAbilityWithMaskOption:(unsigned long long)a0;
- (id)addAbilityWithInfo:(id)a0;
- (id)startShoot;
- (id)p_createAbilityWithType:(long long)a0 object:(id)a1 objectId:(id)a2;
- (void)p_createInputDataIfNeed;
- (id)p_preParameterCheckList;
- (void)p_prepareShootingWithCompletion:(id /* block */)a0;
- (void)p_jumpShootWithInputData:(id)a0 withCompletion:(id /* block */)a1;
- (void)p_jumpAlbumWith:(id)a0 withInputData:(id)a1 flashModel:(id)a2 clickAction:(id /* block */)a3;
- (id)p_paramterConfigurationBeforeJumpShoot:(id)a0;
- (id)p_autoGenerateBasicTrackWithRouterParam:(id)a0;
- (id)p_paramConfiguration:(id)a0;
- (void).cxx_destruct;

@end
