@interface IESIMGroupImpl.GroupAssistantSkillService : HTSService <IESIMGroupAssistantSkillService>

- (void)updateGrowthPlan:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateChatSkillStateForType:(unsigned long long)a0 state:(BOOL)a1 con:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)dimensionForType:(unsigned long long)a0;
- (BOOL)isEnabledForSkill:(id)a0 con:(id)a1;
- (BOOL)stateForType:(unsigned long long)a0 con:(id)a1;
- (BOOL)canEditForType:(unsigned long long)a0 con:(id)a1;
- (void)editStateForType:(unsigned long long)a0 con:(id)a1 extraParams:(id)a2 display:(id /* block */)a3 update:(id /* block */)a4;
- (id)init;

@end
