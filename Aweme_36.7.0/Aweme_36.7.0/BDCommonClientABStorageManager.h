@class NSDictionary, BDCommonABKeychainStorage;

@interface BDCommonClientABStorageManager : NSObject

@property (retain, nonatomic) BDCommonABKeychainStorage *keychainManager;
@property (copy) NSDictionary *featureDicts;
@property (copy) NSDictionary *serverSettingFeatureDicts;
@property (copy) NSDictionary *layer2GroupMap;

+ (id)firstInstallVersionStr;
+ (void)saveAPPVersionInfosIfNeed;

- (id)serverSettingValueForFeatureKey:(id)a0;
- (id)valueForFeatureKey:(id)a0;
- (id)vidList;
- (id)randomNumber;
- (id)AppVersion;
- (void)saveRandomNumberDicts:(id)a0;
- (void)saveCurrentVersionLayer2GroupMap:(id)a0;
- (void)resetFeatureKeys:(id)a0;
- (void)updateDataFromOldClientABStorageAsyncIfNeed;
- (void)saveABGroup:(id)a0;
- (void)saveAppVersion:(id)a0;
- (void)resetServerSettingFeatureKeys:(id)a0;
- (id)currentLayer2GroupMap;
- (id)featureKeyDicts;
- (id)readServerSettingFeatureKeyDicts;
- (void)saveABVersion:(id)a0;
- (id)ABVersion;
- (id)ABGroup;
- (void).cxx_destruct;
- (id)init;

@end
