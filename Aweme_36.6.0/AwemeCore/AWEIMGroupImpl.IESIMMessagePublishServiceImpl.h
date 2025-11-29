@interface AWEIMGroupImpl.IESIMMessagePublishServiceImpl : HTSService <IESIMMessagePublishService>

- (long long)getPublishPermissionWith:(id)a0;
- (BOOL)enableMenuEntranceWithCon:(id)a0 message:(id)a1;
- (BOOL)shouldShowRedDot;
- (id)longPressEntranceName;
- (void)didClickPublishEntranceWithContext:(id)a0 cell:(id)a1 messageContext:(id)a2;
- (BOOL)actionSheetLazyLoadEnable;
- (BOOL)editModeSubSceneEnable;
- (BOOL)messageForbidSelectEnable;
- (BOOL)backKeepSelectStateEnable;
- (BOOL)addJoinGroupTrackParamEnable;
- (id)getPublishPermissionListWith:(id)a0;
- (id)init;

@end
