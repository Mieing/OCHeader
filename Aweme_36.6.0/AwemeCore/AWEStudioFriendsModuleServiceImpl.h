@class NSString;

@interface AWEStudioFriendsModuleServiceImpl : NSObject <AWEStudioFriendsModuleServiceProtocol, ACCCloseFriendsStoryOptionViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)privacySelectedConfirm:(id)a0 publishViewModel:(id)a1;

- (Class)syncTipsAlertManagerClass;
- (Class)AWEPrivacyPermissionDecouplingManagerClass;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:(id)a0;
- (BOOL)disabledPublishSync;
- (void)trackSelectPrivacyEvent:(long long)a0 extraParam:(id)a1;
- (id)privacyStatusWithParamsModel:(id)a0;
- (BOOL)isTextStickerShortcutEnabled;
- (id)getLatestWatchedMaskIDList;
- (BOOL)isEnableCloseFriendsFeature;
- (double)enterQuickRecordInFamiliarDateDiff;
- (void)videoNewPublishViewControllerPublishButtonClicked:(id)a0;
- (void)exitSameStyleShoot:(id)a0;
- (void)presentPrivacySettingsWithPublishViewModel:(id)a0 selectPrivacyBlock:(id /* block */)a1 dismissBlock:(id /* block */)a2 enterFrom:(id)a3;
- (void)presentPrivacySettingsWithPublishViewModel:(id)a0 preferredTheme:(long long)a1 scene:(long long)a2 selectPrivacyBlock:(id /* block */)a3 dismissBlock:(id /* block */)a4 enterFrom:(id)a5;
- (void)presentVisibilityPanelForStory25InMainWithPublishViewModel:(id)a0 preferredTheme:(long long)a1 scene:(long long)a2 selectPrivacyBlock:(id /* block */)a3 dismissBlock:(id /* block */)a4 enterFrom:(id)a5;
- (void)presentPrivacySettingsWithPublishViewModel:(id)a0 dismissBlock:(id /* block */)a1;
- (void)presentPrivacySettingsWithPublishViewModel:(id)a0 scene:(long long)a1 dismissBlock:(id /* block */)a2 enterFrom:(id)a3;
- (id)duetOrStoryPermissionSettingViewControllerWithDataController:(id)a0;
- (id)familiarPrivacyStatusWithPublishModel:(id)a0;
- (void)restStoryPrivacyToLastChoice:(id)a0 publishViewModel:(id)a1;
- (void)p_presentPrivacyOrAdvanceSettingsWithPublishViewModel:(id)a0 scene:(long long)a1 selectPrivacyBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3 enterFrom:(id)a4;
- (BOOL)enableOnlyEditPageShowAdvanceSettingWithPublishViewModel:(id)a0 scene:(long long)a1;
- (void)p_showAdvanceSettingPanelWithPublishModel:(id)a0 dismissBlock:(id /* block */)a1;
- (BOOL)p_shouldAddAdvanceSettingWithPublishViewModel:(id)a0;
- (void)p_showNormalSettingPanelWithPublishModel:(id)a0 paramsModel:(id)a1 preferredTheme:(long long)a2 disallowedCellTypes:(id)a3 shouldAddAdvanceSetting:(BOOL)a4 xiguaPrivacyBeforeChange:(long long)a5 selectPrivacyBlock:(id /* block */)a6 dismissBlock:(id /* block */)a7;
- (void)p_addAdvanceSettingsWithPublishModel:(id)a0 privacyController:(id)a1;

@end
