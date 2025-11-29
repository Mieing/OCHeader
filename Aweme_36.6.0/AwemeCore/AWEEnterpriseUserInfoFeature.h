@class AWEEnterpriseUserInfoModel, AWEUserModel, NSString;

@interface AWEEnterpriseUserInfoFeature : AWEFeature <AWEEnterpriseUserInfoProtocol>

@property (retain, nonatomic) AWEUserModel *targetUser;
@property (retain, nonatomic) AWEEnterpriseUserInfoModel *infoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWECommerceModuleServiceDOUYINHTSAdapterClass;
+ (id)aliasName;
+ (id)instanceConfigs;

- (BOOL)hasEmployeePermisson;
- (id)eRoleKey;
- (BOOL)isCompanyProfile;
- (id)aAWECommerceModuleServiceDOUYINHTSAdapter;
- (BOOL)hasDouplusShareMoveForward;
- (id)nicknameEditLimitToast;
- (id)avatarEditLimitToast;
- (id)alternativeNickNames;
- (id)atticInfoPicUrl;
- (id)atticInfoIronManUrl;
- (id)profileLinkEditURL;
- (id)basicCurrentUserInfos;
- (id)serviceCenterTitle;
- (id)serviceCenterSchema;
- (BOOL)editEntryPermissionWithKeyName:(id)a0;
- (BOOL)shouldShowCompanyHomepageTab;
- (BOOL)hasHomepageTabManagementPermission;
- (BOOL)shouldLimitAtID:(long long)a0 needUpdateLimit:(BOOL)a1;
- (id)storageKeyWithID:(long long)a0 actionType:(long long)a1;
- (id)limitDictFromStorageKey:(id)a0;
- (BOOL)shouldLimitOnLimitActionModel:(id)a0 limitID:(long long)a1 needUpdateLimit:(BOOL)a2;
- (id)p_localTargetKey;
- (id)p_profileSlideCenterTitle;
- (id)p_profileSlideAuthorCenterSchema;
- (id)p_profileSlideCenterSchema;
- (BOOL)hasHeadImagePermission;
- (BOOL)hasProfilePermission;
- (BOOL)hasTransTabPermission;
- (BOOL)hasIMMonitorPermisson;
- (BOOL)hasIMMonitorEmployeePermisson;
- (BOOL)hasEIMCustomizeMenusPermisson;
- (BOOL)hasIMKeyboardCompanyComponentFunction;
- (BOOL)hasIMSendActionPermisson;
- (BOOL)hasBrandNamePermisson;
- (BOOL)shouldShowEnterpriseRecommendEntry;
- (id)profileHeaderImageURLModels;
- (id)tabCeilingToastIndexAtTab:(long long)a0 needUpdateLimit:(BOOL)a1;
- (BOOL)shouldLimitOnTagNeedUpdateLimit:(BOOL)a0;
- (void)saveInStorageWithLimitID:(long long)a0 actionType:(long long)a1;
- (id)enterpriseUserInfoJson;
- (void)enterTagVideoFromPost;
- (BOOL)shouldInterceptModify;
- (BOOL)shouldTrackEnterpriseClickEvent;
- (BOOL)shouldShowGeneralESC;
- (id)serviceCenterTrackerParams;
- (void).cxx_destruct;

@end
