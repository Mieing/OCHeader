@class NSString, FavoritesItem, NSMutableSet, FavoritesItemDB, NSMutableArray, FavoritesDownloader;
@protocol FavoritesDownloadMgrDelegate;

@interface FavoritesDownloadMgr : MMObject <CNetworkStatusExt, FavoritesDownloaderDelegate> {
    NSMutableArray *_downloadingQueue;
    NSMutableArray *_failQueue;
    NSMutableArray *_activeQueue;
    NSMutableSet *_downloadSet;
    FavoritesItem *_priorItem;
    BOOL _isDownloading;
    FavoritesItemDB *_favItemDB;
    FavoritesDownloader *_favDownloader;
}

@property (weak, nonatomic) id<FavoritesDownloadMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initDB:(id)a0;
- (BOOL)loadDownloadingQueue;
- (BOOL)loadFailedQueue;
- (void)startDownloadItem:(id)a0 IsPriority:(BOOL)a1;
- (BOOL)delDownloadItem:(id)a0;
- (void)realStartDownloadItem:(id)a0 IsPriority:(BOOL)a1;
- (void)realAddFavItem:(id)a0 IsPriority:(BOOL)a1;
- (BOOL)realDelDownloadItem:(id)a0;
- (void)TryStartDownload;
- (void)stopDownloadAllFavItem;
- (void)changeToNoWifi;
- (id)getDownloadingItemList;
- (void)onDownloadFavItem:(id)a0 RetCode:(int)a1;
- (BOOL)checkAsyncUploadingDataInItem:(id)a0;
- (BOOL)checkAsyncUploadingDataInDataList:(id)a0 NeedFix:(BOOL)a1;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
