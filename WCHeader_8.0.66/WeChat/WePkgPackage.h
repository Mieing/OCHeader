@class WePkgRegularConfig, NSMutableDictionary, NSHashTable, NSString, WePkgMetaInfo, WePkgParser;

@interface WePkgPackage : MMObject

@property (retain, nonatomic) WePkgRegularConfig *regularConfig;
@property (retain, nonatomic) NSMutableDictionary *dicRid2BigPackageIdx;
@property (retain, nonatomic) NSMutableDictionary *dicRid2SingleFileInfo;
@property (retain, nonatomic) NSMutableDictionary *dicRid2DataItem;
@property (retain, nonatomic) NSMutableDictionary *dicRid2PreloadDataItem;
@property (retain, nonatomic) NSHashTable *oUsingWebViews;
@property (retain, nonatomic) NSString *pkgId;
@property (readonly, nonatomic) BOOL inUsing;
@property (retain, nonatomic) WePkgMetaInfo *metaInfo;
@property (retain, nonatomic) WePkgParser *parser;
@property (nonatomic) BOOL isCheckPackage;

+ (id)packageWithPkgId:(id)a0;
+ (void)cleanPkgStatus;
+ (void)notifyPackageChanged:(id)a0;

- (id)initWithPkgId:(id)a0 andRegularConfig:(id)a1;
- (id)pkgVersion;
- (BOOL)checkIfInFileIndex:(id)a0;
- (id)getCacheDataForUrl:(id)a0;
- (id)getCacheDataForRid:(id)a0;
- (id)innerGetCacheDataForRid:(id)a0;
- (id)getAllCode;
- (void)preloadResourceForUrl:(id)a0;
- (void)releasePreloadResources;
- (id)getCurrentPkgKey;
- (BOOL)isValid;
- (int)checkIfPkgFileModified;
- (int)checkOneFileModified:(id)a0 ExpectFileSize:(unsigned int)a1 ExpectFileMd5:(id)a2;
- (void)setupRid2Index;
- (void)setupSingleFileIndex:(id)a0;
- (void)parseBigPackageFile;
- (void)updateLastUsedTime;
- (id)genRidFromUrl:(id)a0;
- (void)releaseData;
- (BOOL)containsWebView:(id)a0;
- (void)addWebView:(id)a0;
- (BOOL)removeWebView:(id)a0;
- (void).cxx_destruct;

@end
