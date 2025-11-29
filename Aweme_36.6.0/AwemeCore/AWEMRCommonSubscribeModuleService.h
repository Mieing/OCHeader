@class NSString;

@interface AWEMRCommonSubscribeModuleService : HTSService <AWEMRCommonSubscribeModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferCommonSubscribeManageWithEnterFrom:(id)a0;
- (void)transferCommonSubscribeManageDetailWithEnterFrom:(id)a0 serviceAccountId:(id)a1 serviceAccountName:(id)a2;
- (id)viewControllerWithServiceAccountModel:(id)a0 enterFrom:(id)a1;
- (BOOL)enableCommonSubscribeManageEntrance;
- (BOOL)enableCommonSubscribeManagerSettingsCellOpt;

@end
