@class NSString;

@interface AFDPrivacyPublishManager : NSObject <AFDPrivacyPublishManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)barrageTextOfPrivacyTypeWithAwemeModel:(id)a0;
+ (BOOL)updateCachedAwemeDataSource:(id)a0 withChangedAwemeModel:(id)a1;
+ (void)trackShowVisibilityPanelEventWithAwemeModel:(id)a0 params:(id)a1;
+ (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:(id)a0;
+ (BOOL)shouldForbidChangePrivacyForXiguaStartAtlasWithAwemeModel:(id)a0;
+ (void)changeAwemePrivacy:(id)a0 completion:(id /* block */)a1;
+ (BOOL)updateCachedAwemeModel:(id)a0 withChangedAwemeModel:(id)a1;
+ (id)privacyStatusWithAwemeModel:(id)a0;
+ (id)privacyButtonFullTextOfPrivacyTypeWithAwemeModel:(id)a0;
+ (id)privacyButtonIconOfPrivacyTypeWithAwemeModel:(id)a0;
+ (id)privacyButtonShortTextOfPrivacyTypeWithAwemeModel:(id)a0;
+ (id)toastTextOfModifyWithPermissionType:(long long)a0 awemeModel:(id)a1;
+ (BOOL)allowsPermissionTypesForStory:(long long)a0 is25Story:(BOOL)a1;
+ (BOOL)allowsPermissionTypeForNormal:(long long)a0;
+ (BOOL)p_enableRecordPrivacyLastChoice;
+ (id)p_lastPublishPrivacyChoiceKey;
+ (void)clearStoryPrivacyParamsModel;
+ (id)socialCameraRememberPrivacyPermissionTypeWhiteList;
+ (void)trackSelectPrivacyEvent:(id)a0 fromStatus:(id)a1 toPrivacyPermissionType:(long long)a2 extraParam:(id)a3;
+ (id)privacyStatusWithPrivacyPermissionType:(long long)a0;
+ (id)p_publishPermissionEntryTextWithPermissionType:(long long)a0 count:(long long)a1;
+ (id)permissionTextWithScene:(id)a0 permissionType:(long long)a1 count:(long long)a2;
+ (id)story25PermissionPanelSubtitleWithPermissionType:(long long)a0 count:(long long)a1;
+ (long long)xiguaPrivacyTypeWithAwemePrivacyType:(unsigned long long)a0 model:(id)a1 isExclusionSelected:(BOOL)a2 extraParams:(id)a3;
+ (id)xiguaPrivacyParamsWithXiguaPrivacyType:(long long)a0 model:(id)a1;
+ (void)updateLocalAwemePrivacy:(id)a0;
+ (void)trackUpdateXiguaPrivacyTypeWithAwemeModel:(id)a0 success:(BOOL)a1;
+ (void)requestTurnToPrivacyType:(id)a0 completion:(id /* block */)a1;
+ (void)p_requestTurnToPrivacyType:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (unsigned long long)turnToPrivacyTypeFromPermissionType:(long long)a0;
+ (BOOL)shouldChangeXiguaPrivacyWithAwemeModel:(id)a0;
+ (BOOL)addCommentConditonBeforePublish;
+ (id)privacyPermissionPanelListConfig;
+ (void)updatePrivacyCachesWithParamsModel:(id)a0;
+ (void)setStoryPrivacyParamsModel:(id)a0 inPublishModel:(id)a1;
+ (void)saveStoryPrivacyParamsModelInPublishModelIfNeeded:(id)a0;
+ (id)getStoryPrivacyParamsModel;
+ (void)trackSelectPrivacyEvent:(long long)a0 extraParam:(id)a1;
+ (id)privacyStatusWithParamsModel:(id)a0;
+ (id)privatePermissionTitleForPostPagePermissionEntryWithPublishModel:(id)a0 needShowCount:(BOOL)a1;
+ (id)privatePermissionTitleForStoryPostPageLastChoiceWithPrivacyPublishParamsModel:(id)a0;
+ (id)privatePermissionIconForPostPagePermissionEntryWithPublishModel:(id)a0;
+ (id)story25EditPermissionEntryConfigWithPublishModel:(id)a0;
+ (id)story25CinemaModeEditPermissionEntryConfigWithPublishModel:(id)a0;
+ (id)story25EditPermissionEntryTextWithPublishModel:(id)a0;
+ (id)story25CinemaModeEditPermissionEntryTextWithPublishModel:(id)a0;
+ (id)story25PermissionPanelSubtitleWithPublishModel:(id)a0;
+ (id)story25PermissionPanelSubtitleInMainCameraWithPublishModel:(id)a0;
+ (struct AFDPrivacyPanelItemTitles { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; })privacyPanelItemTitles;
+ (id)iconImageOfPrivacyType:(long long)a0 color:(id)a1;


@end
