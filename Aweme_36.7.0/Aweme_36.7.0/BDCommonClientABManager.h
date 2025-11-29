@class NSString, NSMutableDictionary, BDCommonClientABStorageManager;

@interface BDCommonClientABManager : NSObject

@property (copy) NSString *appVersionStr;
@property (retain, nonatomic) NSMutableDictionary *clientLayers;
@property (nonatomic) BOOL troubleshootingExcuted;
@property (retain, nonatomic) BDCommonClientABStorageManager *localStorageManager;

+ (id)sharedManager;

- (BOOL)registerClientLayer:(id)a0;
- (void)launchClientExperimentManager;
- (void)saveServerSettingsForClientExperiments:(id)a0;
- (id)serverSettingValueForFeatureKey:(id)a0;
- (id)valueForFeatureKey:(id)a0;
- (id)vidForLayerName:(id)a0;
- (id)vidList;
- (id)clientLayerByName:(id)a0;
- (id)randomFactors;
- (void)sendEventForClientExpTroubleshooting:(BOOL)a0;
- (BOOL)_isPassLayerFiltersVerify:(id)a0;
- (BOOL)_verifyChannelFilters:(id)a0;
- (BOOL)_verifyFirstInstallVersion:(id)a0;
- (BOOL)_verifyNormalFilterKeys:(id)a0;
- (void).cxx_destruct;

@end
