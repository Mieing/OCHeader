@class LLAnniePOICustomVersionSetting, NSMutableDictionary, NSString, NSMutableArray;

@interface LLAnniePOIGeckoVersionManager : NSObject <IESGurdEventDelegate>

@property (retain, nonatomic) NSMutableDictionary *localMap;
@property (retain, nonatomic) NSMutableDictionary *settingMap;
@property (retain, nonatomic) NSMutableArray *settingChannelList;
@property (retain, nonatomic) LLAnniePOICustomVersionSetting *versionSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customVersionSettings;
+ (id)sharedInstance;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (id)fixBulletSchemaURL:(id)a0;
- (void)configRemoteSetting;
- (void)setupCubeSchemaInterceptorBlock;
- (void)setupCubeFetchUniqueKeyBlock;
- (void)bundleVersionMapWithChannel:(id)a0;
- (id)geckoIdForChannel:(id)a0;
- (id)geckoInfoKeyForChannel:(id)a0 geckoId:(id)a1;
- (id)targetVersionCanUse:(id)a0 trackParams:(id)a1;
- (BOOL)hasGeckoResourcesForChannel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
