@interface IESIMConversationSettingImpl.GroupSettingsService : HTSService <IESIMGroupSettingsServiceProtocol>

- (long long)groupSettingsItemPermissionForCon:(id)a0 type:(long long)a1;
- (BOOL)isSupportFeatureWithType:(long long)a0 forConversation:(id)a1;
- (void)asyncGetGroupSettingsItemForCon:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)asyncGetGroupSettingsSectionsForCon:(id)a0 completion:(id /* block */)a1;
- (void)asyncGroupManagementSectionsForCon:(id)a0 completion:(id /* block */)a1;
- (void)asyncGetGroupSettingsItemPermissionForCon:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)groupSettingsItemForCon:(id)a0 type:(long long)a1;
- (id)generateGroupListViewControllerWithConfiguration:(id)a0;
- (void)showGroupSettingsWithContext:(id)a0;
- (id)groupSettingsViewControllerWithContext:(id)a0;
- (void)showSingleSettingsWithContext:(id)a0;
- (id)singleSettingsViewControllerWithContext:(id)a0;
- (void)showGroupManagementWithContext:(id)a0;
- (void)showFormatSettingsWithContext:(id)a0;
- (BOOL)editPermissionIsEnableForCon:(id)a0 type:(long long)a1;
- (id)groupSettingsItemWithType:(long long)a0 conversation:(id)a1;
- (void)asyncSingleSettinsSectionsForCon:(id)a0 completion:(id /* block */)a1;
- (void)fetchGroupSettingsWithContext:(id)a0 scene:(long long)a1;
- (BOOL)showPermissionIsEnableForCon:(id)a0 type:(long long)a1;
- (id)init;

@end
