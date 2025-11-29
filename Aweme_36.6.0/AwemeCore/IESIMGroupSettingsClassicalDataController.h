@class NSString;

@interface IESIMGroupSettingsClassicalDataController : NSObject <IESIMGroupSettingsDataControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (long long)p_groupSettingsItemPermissionForCon:(id)a0 conversation:(id)a1 config:(id)a2 type:(long long)a3;
- (id)p_groupSettingsItemForCon:(id)a0 conversation:(id)a1 config:(id)a2 type:(long long)a3;
- (long long)p_platformGroupFeatureTypeFromType:(long long)a0 con:(id)a1;
- (long long)p_groupSettingsItemPermissionForConversation:(id)a0 config:(id)a1 type:(long long)a2;
- (id)p_groupSettingsItemForCon:(id)a0 type:(long long)a1;
- (id)p_platformGroupFeatureItemFromType:(long long)a0 config:(id)a1;
- (void)updateClassicalGroupSettingsItemModel:(id)a0 con:(id)a1 conversation:(id)a2 config:(id)a3;
- (id)singleSettingsSectionsForCon:(id)a0;
- (id)p_groupSettingsSectionForCon:(id)a0 conversation:(id)a1 config:(id)a2 title:(id)a3 types:(id)a4;
- (id)p_makeParticipantsSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeInfoSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeManagementSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeShareSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeFindMessagesSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeChatAlbumSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeShareContentSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeNoticeSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeBackgroundSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeReportSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeDissolveAndLeaveSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeEnterGroupSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeModifyAuthorizationSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeMessageManagementSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeParticipantManagementSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeUpgradeSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeSynchronizeSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;
- (id)p_makeDissolveSectionWithCon:(id)a0 conversation:(id)a1 config:(id)a2;

@end
