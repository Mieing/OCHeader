@class AWEHPHambCheckerManager, AWEHPHambSettingsNetworkManager, NSLock, AWEHPHambSettingsStorage, NSDictionary, NSMutableArray, AWEHPHambDefaultSettingsFactory, AWEHPHambSettingsDataModel;

@interface AWEHPHambSettingsManager : NSObject

@property (nonatomic) BOOL isLoad;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) AWEHPHambCheckerManager *checkerManager;
@property (retain, nonatomic) AWEHPHambSettingsNetworkManager *networkManager;
@property (retain, nonatomic) AWEHPHambDefaultSettingsFactory *defaultConfigFactory;
@property (retain, nonatomic) AWEHPHambSettingsStorage *storageManager;
@property (retain, nonatomic) NSDictionary *defaultConfig;
@property (retain, nonatomic) AWEHPHambSettingsDataModel *settingsModel;
@property (retain, nonatomic) NSLock *lock;

- (id)initWithCheckerManager:(id)a0;
- (void)addNewConfigBlock:(id /* block */)a0;
- (void)getSettingsWithDefaultConfig:(id *)a0 settingsModel:(id *)a1;
- (void)p_tryLoadSettings;
- (void)p_reloadSettings:(id)a0;
- (void)p_callNewConfigBlocks:(id)a0;
- (BOOL)writeResponse:(id)a0 request:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
