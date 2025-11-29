@class NSString;

@interface IESIMCommerceService : HTSService <IESIMCommerceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordAdParamsInIMSceneWithParams:(id)a0 conversationID:(id)a1;
- (id)getBTMChainStringWithSceneType:(long long)a0 currentView:(id)a1 enterNewPage:(BOOL)a2 btmInfo:(id)a3;
- (void)trackWithAdContext:(id)a0;
- (void)showAlertSheetCallWithSmartPhone:(BOOL)a0 ID:(id)a1 phoneKey:(id)a2 number:(id)a3 positionTag:(id)a4 refer:(long long)a5 extraInfo:(id)a6 customField:(id)a7;
- (id)commonPhoneGscenarioWithType:(id)a0 orit:(id)a1 technologySupport:(id)a2;
- (BOOL)shouldInactiveEnterpriseInstantMessageCard;
- (id)createAdTrackContext;
- (unsigned long long)p_aweAdBTMChainSceneTypeWithIESIMType:(long long)a0;
- (id)p_aweSubBusinessScenarioValueWithValue:(id)a0;
- (unsigned long long)p_aweSmartPhoneReferWithIESIMRefer:(long long)a0;
- (void)callMultiplePhoneWithSmartPhoneModels:(id)a0 positionTag:(id)a1 refer:(long long)a2 gscenario:(id)a3 mKey:(id)a4 customField:(id)a5;
- (id)createAdReportedButton;
- (void)configAdReportedButton:(id)a0 withItemID:(id)a1 userID:(id)a2 adValue:(id)a3 adLogExtra:(id)a4;
- (void)trackWithContextBuildBlock:(id /* block */)a0;
- (void)routeToADLandingPageWithParams:(id)a0;
- (void)runTaskWithSchema:(id)a0;
- (void)asyncRunTaskWithSchema:(id)a0;
- (id)p_aweSmartPhoneConfigWithIESIMConfig:(id)a0;

@end
