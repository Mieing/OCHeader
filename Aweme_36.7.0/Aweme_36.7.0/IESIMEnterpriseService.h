@class NSString;

@interface IESIMEnterpriseService : HTSService <IESIMEnterpriseService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterIMSendCompanyComponentPage:(id)a0;
- (id)hitIMCompanyToolDomainUrlToGetKey:(id)a0;
- (id)addParams:(id)a0 withTargetString:(id)a1;
- (BOOL)isEnterpriseRelatedUser:(id)a0;
- (unsigned long long)roleTypeWithUserModel:(id)a0;
- (id)tagTipGifUrl;
- (BOOL)shouldUserRoleTagTransferToEnterpriseCertificationPage;
- (BOOL)hasEmployeePermissionWithUserModel:(id)a0;
- (BOOL)hasEIMCustomizeMenusPermissionWithUserModel:(id)a0;
- (BOOL)hasIMMonitorPermissionWithUserModel:(id)a0;
- (BOOL)hasIMSendActionPermissionWithUserModel:(id)a0;
- (BOOL)hasIMMonitorEmployeePermissionWithUserModel:(id)a0;
- (BOOL)currentUserHasIMMonitorPermission;
- (BOOL)currentUserHasIMKeyboardCompanyComponentFunction;
- (BOOL)currentUserHasIMMonitorEmployeePermission;
- (id)currentUserERoleKey;
- (BOOL)shouldSchemaJoinParamsInIMScene;
- (id)createCompanyMenuFeatureWithCompany:(id)a0 didClickKeyboardBlock:(id /* block */)a1 didClickAutoreplyMenuBlock:(id /* block */)a2 didClickMenuBlock:(id /* block */)a3 didTappedBlock:(id /* block */)a4 canSwitchToKeyboardBlock:(id /* block */)a5;
- (id)enterpriseConversationCustomPlaceholderExperimentDesc;

@end
