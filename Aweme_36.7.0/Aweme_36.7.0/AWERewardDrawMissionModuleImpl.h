@class NSString;

@interface AWERewardDrawMissionModuleImpl : HTSService <AWERewardDrawMissionModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWERewardDrawMissionLiteAdapterClass;

- (void)notifyRewardAdLivePendantProgress:(id)a0;
- (id)drawModeWatchInfoOnRoomId:(id)a0 awardEvent:(id /* block */)a1;
- (void)openRewardDrawMissionVCFromSchemeWithParamsDictionary:(id)a0;
- (id)rewardDrawSceneReferString;
- (id)aAWERewardDrawMissionLiteAdapter;

@end
