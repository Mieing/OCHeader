@class QConfigPreference, NSString, QConfigManager, QOfflineMapDownloader, NSArray, NSMutableArray, NSCache;

@interface QOfflineMap : NSObject

@property (retain, nonatomic) NSCache *offlineConfigCache;
@property (retain, nonatomic) NSString *dirNew;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) QConfigManager *configManager;
@property (retain, nonatomic) QConfigPreference *configPreference;
@property (copy, nonatomic) NSString *offlineConfigPath;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) QOfflineMapDownloader *downloader;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *downloadingItems;

+ (id)sharedOfflineMap;
+ (BOOL)offlineMapEnable;

- (id)init;
- (void)setUpConfigManager;
- (void)downloadItem:(id)a0 callback:(id /* block */)a1;
- (void)cancelDownload:(id)a0;
- (void)deleteItem:(id)a0;
- (void)reloadItems:(id /* block */)a0;
- (void)createOfflineCitiesArray;
- (long long)compareVersionNumber:(id)a0 withLocalVersionDict:(id)a1;
- (id)getConfigVersionDict;
- (id)getCityListArray:(id)a0 withDictionary:(id)a1;
- (id)getOfflineDisplayName:(id)a0 withInfoDict:(id)a1;
- (id)getOfflineItemDownloadURL:(id)a0;
- (id)getOfflineMapCitiesDictionary;
- (id)getOfflineMapConfigPath:(id)a0;
- (id)getCDNConfigCityList;
- (id)getOfflineItemLocalVersionPlist;
- (void)createOfflineMapCacheDirectory;
- (void)updateLocalVersionPlist:(id)a0 withDictionary:(id)a1;
- (id)assembleVersionDictionary:(id)a0;
- (id)createKCOfflineItem:(id)a0 withInfo:(id)a1;
- (id)createQOfflineItem:(id)a0 withInfo:(id)a1;
- (void)setOfflineMapStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
