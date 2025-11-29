@class MAOfflineItemNationWide, NSString, NSMutableDictionary, MAOfflinePackage, NSArray, NSMutableArray, AMapNetworkManager;

@interface MAOfflineMap : NSObject

@property (copy, nonatomic) NSString *basePath;
@property (copy, nonatomic) NSString *CachedFilePath;
@property (copy, nonatomic) NSString *vmapPath;
@property (retain, nonatomic) MAOfflinePackage *package;
@property (nonatomic) long long maxConcurrentDownloadCount;
@property (retain, nonatomic) NSMutableDictionary *runningOperations;
@property (retain, nonatomic) NSMutableArray *waitingItems;
@property (retain, nonatomic) NSMutableDictionary *cancelBlocks;
@property BOOL checkNewestVersionIsRunning;
@property (retain, nonatomic) AMapNetworkManager *downloader;
@property (readonly, nonatomic) NSArray *provinces;
@property (readonly, nonatomic) NSArray *municipalities;
@property (readonly, nonatomic) MAOfflineItemNationWide *nationWide;
@property (readonly, nonatomic) NSArray *cities;
@property (readonly, nonatomic) NSString *version;

+ (id)sharedOfflineMap;
+ (id)offlineRequestQueue;

- (void)forbidBackup;
- (void)setupWithCompletionBlock:(id /* block */)a0;
- (BOOL)pauseItem:(id)a0;
- (void)checkNewestVersion:(id /* block */)a0;
- (void)downloadItem:(id)a0 shouldContinueWhenAppEntersBackground:(BOOL)a1 downloadBlock:(id /* block */)a2;
- (void)clearDiskOfBefore600;
- (void)clearDisk;
- (id)offlinePlistFilePath;
- (void)setupStatus;
- (void)updateOfflinePackageWithCompletionBlock:(id /* block */)a0;
- (BOOL)isDownloadingForItem:(id)a0;
- (id)cachedFilePathForItem:(id)a0;
- (unsigned long long)fileSizeForPath:(id)a0;
- (id)progressInfoWithReceivedSize:(long long)a0 expectedSize:(long long)a1;
- (void)doDeleteForItem:(id)a0;
- (void)executeCompleteWithItem:(id)a0 downloadBlock:(id /* block */)a1 status:(long long)a2 info:(id)a3;
- (void)executeCancelBlockWithItem:(id)a0;
- (id)vmapFilePathForItem:(id)a0;
- (BOOL)unzipDownloadedFile:(id)a0 toPath:(id)a1 adcode:(id)a2 error:(id *)a3;
- (void)tryToStartDownloadOperation:(id)a0 forItem:(id)a1;
- (void)tryPopWaitingOperations;
- (BOOL)doPauseForItem:(id)a0;
- (void)deleteFilesForItem:(id)a0;
- (void)resetItemStatusForItem:(id)a0;
- (BOOL)clearAndReconstructDirectoryAtPath:(id)a0;
- (void)updateItemStatusToNoneIncludingCached:(BOOL)a0;
- (void)checkLocalVersion:(id)a0 completionBlock:(id /* block */)a1;
- (void)mergeFrom:(id)a0 to:(id)a1;
- (void)checkoutNewestPackageWithCompletionBlock:(id /* block */)a0;
- (void)deleteCachedFileForItems:(id)a0;
- (id)folderNameUsedForEngine:(id)a0;
- (void)mergeAE8POfflineDataStatusToPackageIfNeed:(id)a0;
- (void)setupBasePath;
- (void)setupPackage;
- (void).cxx_destruct;
- (id)init;
- (BOOL)deleteFileAtPath:(id)a0;
- (void)cancelAll;
- (void)deleteItem:(id)a0;

@end
