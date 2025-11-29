@interface IESIMConversationSettingImpl.GroupSettingsDataController : NSObject <IESIMGroupSettingsDataControllerProtocol, IESIMUserServiceMessage> {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ hasFetchedInThisLife;
}

- (long long)groupSettingsItemPermissionForCon:(id)a0 type:(long long)a1;
- (BOOL)isSupportFeatureWithType:(long long)a0 forConversation:(id)a1;
- (void)asyncGetGroupSettingsItemForCon:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)asyncGetGroupSettingsSectionsForCon:(id)a0 completion:(id /* block */)a1;
- (void)asyncGroupManagementSectionsForCon:(id)a0 completion:(id /* block */)a1;
- (void)asyncGetGroupSettingsItemPermissionForCon:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)groupSettingsItemForCon:(id)a0 type:(long long)a1;
- (void)asyncSingleSettingsSectionsForCon:(id)a0 completion:(id /* block */)a1;
- (id)groupSettingsItemWithType:(long long)a0 forGroupType:(id)a1;
- (id)groupSettingsSectionsForCon:(id)a0;
- (id)groupManagementSectionsForCon:(id)a0;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
