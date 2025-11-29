@interface BDXBridgeOpenPlatformGetLocationMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)trackEvent:(id)a0 trackerParams:(id)a1 paramModel:(id)a2;
- (void)callBackFail:(id /* block */)a0 isOpenUnionAuth:(BOOL)a1 errorCode:(id)a2 errorMsg:(id)a3 paramModel:(id)a4;
- (BOOL)checkShouldShowUserAlert:(long long)a0;
- (void)getLocation:(id /* block */)a0 isOpenUnionAuth:(BOOL)a1 paramModel:(id)a2;
- (void)recordFirstShowDone:(BOOL)a0;
- (void)recordUserAlertAgree;
- (void)showNoPermissionAlertWithCert:(id)a0 paramModel:(id)a1;
- (id)getLastAgreeSaveKey;
- (id)getFirstShowDoneSaveKey;
- (BOOL)checkFirstShowDonw;
- (long long)authType;
- (id)methodName;

@end
