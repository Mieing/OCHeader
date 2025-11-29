@class NSDictionary, NSRecursiveLock, BDPDynamicPluginFileStorage;
@protocol BDPKVInterface;

@interface BDPDynamicPluginModelStore : NSObject

@property (copy, nonatomic) NSDictionary *innerPluginModels;
@property (retain, nonatomic) BDPDynamicPluginFileStorage *pluginStorage;
@property (retain, nonatomic) NSRecursiveLock *migrateLock;
@property (retain, nonatomic) id<BDPKVInterface> storage;

+ (id)storeDefaults;
+ (id)storageMigrateTempFilePath;
+ (id)storagePath;

- (void)setModelMap:(id)a0;
- (id)modelMap;
- (void)addNewPluginModel:(id)a0;
- (id)allLatestPluginModels;
- (id)getLastestPluginModelWithID:(id)a0;
- (id)innerPluginModelForPluginName:(id)a0;
- (BOOL)isPluginModelDownloaded:(id)a0;
- (void)migrateStoreToStorageIfNeeded;
- (id)updatedPluginModelsForName:(id)a0;
- (void)deletePluginModel:(id)a0;
- (void)clearStoreRecord;
- (id)latestPluginModelsFromAllModels:(id)a0;
- (id)allUpdatedPlugins;
- (id)getLastestVersionAndMD5WithID:(id)a0;
- (id)pluginModelWithPluginName:(id)a0 version:(id)a1 md5:(id)a2;
- (id)latestInnerPluginModels;
- (id)loadInnerPluginModels;
- (id)modelListForInfoList:(id)a0;
- (id)pluginModelForInfo:(id)a0;
- (id)modelMapFromStorage;
- (id)modelMapFromUserDefaults;
- (long long)getStorageMigrateStatusLocked;
- (id)getStorageLocked;
- (void)cleanDamagedMigrationFileLocked;
- (void)realDoMigrateLocked;
- (id)allInnerPluginModels;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;
- (id)allPlugins;

@end
