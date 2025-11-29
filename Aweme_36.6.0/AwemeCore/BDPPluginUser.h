@class NSString, BDPQueue, NSArray, BDPUniqueID;

@interface BDPPluginUser : BDPBridgeInstancePlugin <BDPPrivacyRegulationViewDelegate, BDPDynamicContainerEventMessage> {
    BOOL _isHostLoginFinish;
}

@property (nonatomic) BOOL isLoginFinish;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPQueue *queue;
@property (nonatomic) long long chosenPhoneNumID;
@property (copy, nonatomic) NSString *bindPhoneNumber;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (nonatomic) BOOL phoneNumberListFirstShow;
@property (copy, nonatomic) id /* block */ secondConfirmResultCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBullet2NativeEvent:(id)a0 containerId:(id)a1;
- (BOOL)checkNeedCallContainerOpt:(id)a0;
- (void)clickPrivacyViewWithType:(unsigned long long)a0;
- (BOOL)isAweType;
- (void)getUserInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)loginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)tma_loginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)fetchUserInfoWithCredentials:(BOOL)a0 identityAuth:(BOOL)a1 needIDs:(BOOL)a2 infoType:(id)a3 dataKey:(id)a4 trackerEvent:(id)a5 trackerEventPair:(id)a6 trackerAttributes:(id)a7 uniqueID:(id)a8 callback:(id /* block */)a9;
- (void)trackAuthirzeResultIfNeed:(id)a0 result:(BOOL)a1;
- (void)getPhoneNumberWithParam:(id)a0 subTitle:(id)a1 callback:(id /* block */)a2 instance:(id)a3;
- (void)getClueComponentTitleWithId:(id)a0 appId:(id)a1 completion:(id /* block */)a2;
- (void)getUserTotalInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)processAggrementArray:(id)a0;
- (void)totalInfoTrackerWithJustShown:(BOOL)a0 success:(BOOL)a1;
- (void)getUserTotalInfoWithRequestParam:(id)a0 completion:(id /* block */)a1;
- (id)defaultPhoneNumberManageLynxPageUrlStr;
- (void)openPhoneNumberLynxPageWithUrl:(id)a0 configModel:(id)a1;
- (void)getPhoneNumberListWithPhoneNumber:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldShowPhoneNumberList;
- (id)getPhoneNumberDefaultArray:(id)a0;
- (void)postPhoneNumberProcessWithPhoneNumber:(id)a0 param:(id)a1 subTitle:(id)a2 uniqueID:(id)a3 callback:(id /* block */)a4 instance:(id)a5 authState:(id)a6 commonAttributes:(id)a7;
- (void)getPhoneNumberWithCommonAttributes:(id)a0 param:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3 needCompletion:(BOOL)a4 completion:(id /* block */)a5;
- (void)openSecondConfirmAddPhoneNumberLynxPageWithCallback:(id /* block */)a0;
- (void)openPhoneNumberManageLynxPage;
- (void)updatePhoneNumberList:(id)a0;
- (id)getErrorTypeWithError:(id)a0;
- (void)getUserProfileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getOpenDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkSessionWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getUseDurationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)dealUserRelationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hostLoginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getHostInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_webviewGetPhoneNumberWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_serviceGetPhoneNumberWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getIdentityInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAnonymousIdSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
