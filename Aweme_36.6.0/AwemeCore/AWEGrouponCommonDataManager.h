@class NSString, NSDictionary;

@interface AWEGrouponCommonDataManager : NSObject <AWEBasicModeMessage, AWEUserMessage, AWESettingsComboRequestProtocol, AWENearByCommonDataManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isSubscribeLocationLevelChange;
@property (nonatomic) BOOL hasRequestTabName;
@property (nonatomic) BOOL hasCacheTabName;
@property (nonatomic) BOOL hasChangeTabName;
@property (nonatomic) BOOL hasRecordFeedTabChange;
@property (retain, nonatomic) NSDictionary *comboAPIData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)basicModeDidChange:(BOOL)a0;
- (void)registerMessage;
- (void)privacyAlertAgreed;
- (void)fetchLocationAndActivityDataWithContext:(id)a0 completion:(id /* block */)a1;
- (void)__bindObserve;
- (void)trackNearbyTabCacheWithTargetTabName:(id)a0 showTabName:(id)a1;
- (void)trackNearbyFeedTabChangeWithCityModel:(id)a0;
- (void)cancelLocationLevelChangeSubscribe;
- (BOOL)changeCurrentSelectCityEnable;
- (void)requestNetNearbyCommonDataWithLocation:(id)a0 locationModel:(id)a1 requestType:(unsigned long long)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)clearLastActivityID;
- (void)requestNearbyCommonDataWithLocation:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)lastActivityID;
- (void)updateLastActivityID:(id)a0;
- (void)trackNearbyTabRequestWithTargetTabName:(id)a0 source:(unsigned long long)a1 success:(BOOL)a2;
- (void)requestNetNearbyCommonDataWithLocation:(id)a0 requestType:(unsigned long long)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)requestNetNearbyCommonDataWithLocation:(id)a0 pageType:(long long)a1 locationModel:(id)a2 requestType:(unsigned long long)a3 context:(id)a4 completion:(id /* block */)a5;
- (id)commonTrackParamsWithNearbyTabName:(id)a0;
- (void)trackNearbyTabChangeWithTargetTabName:(id)a0 type:(long long)a1;
- (void)requestNetNearbyCommonDataWithLocation:(id)a0 requestType:(unsigned long long)a1 pageType:(long long)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)trackNearbTabNameChangeTimeOut;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
