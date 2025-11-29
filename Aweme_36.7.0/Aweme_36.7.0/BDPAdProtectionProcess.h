@interface BDPAdProtectionProcess : BDPStorageManager_HG

+ (BOOL)checkBlockAndSettingsWithAppId:(id)a0;
+ (int)durationFromAbTestOrSettings;
+ (void)onStateAdLoadedWithAdUnitID:(id)a0 uniqueID:(id)a1;
+ (void)checkUserInfoWithUniqueID:(id)a0 adUnitID:(id)a1 completion:(id /* block */)a2;
+ (void)onStateAdClosedWithAdUnitID:(id)a0 count:(long long)a1 uniqueID:(id)a2;
+ (void)trackerEventReport:(id)a0 rewarded:(BOOL)a1;
+ (void)trackerEventReportAlert:(id)a0;
+ (void)checkNewUserWithUniqueID:(id)a0 adUnitID:(id)a1 completion:(id /* block */)a2;
+ (void)isNewUserWithType:(id)a0 adUnitID:(id)a1 uniqueID:(id)a2 completion:(id /* block */)a3;

@end
