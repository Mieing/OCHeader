@class FavoritesUploadBaseProccessor, NSString, FavoritesCDNInfoDB, FavoritesItemDB, FavoritesUploadVideoCompressor, NSMutableArray, FavoritesUploadFileSaver;
@protocol FavoritesUploadMgrDelegate;

@interface FavoritesUploadMgr : MMObject <IFavoritesRepairSvrDataExt, FavoritesUploadProccessorDelegate> {
    NSMutableArray *m_failedQueue;
    FavoritesCDNInfoDB *m_favCdnDB;
    FavoritesItemDB *m_favItemDB;
    unsigned long long m_type;
    FavoritesUploadVideoCompressor *m_videoCompressor;
    FavoritesUploadFileSaver *m_fileSaver;
    FavoritesUploadBaseProccessor *m_uploador;
}

@property (weak, nonatomic) id<FavoritesUploadMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(unsigned long long)a0;
- (void)initDB:(id)a0;
- (void)loadUploadingItems;
- (void)loadFailedQueue;
- (id)getUploadFailedItemList;
- (id)getUploadingItemList;
- (void)addUploadItem:(id)a0 isPrior:(BOOL)a1;
- (void)stopUploadItem:(id)a0;
- (void)realAddUploadItem:(id)a0 isPrior:(BOOL)a1;
- (BOOL)tryFixUrlThumbPath:(id)a0;
- (id)tryRecoverSourcePathAndDeepCopyIfFavItemIsUploading:(id)a0;
- (void)tryRecoverSourcePath:(id)a0;
- (void)realStopUploadItem:(id)a0;
- (void)updateTagForItem:(id)a0;
- (void)removeItemInFailQueue:(id)a0;
- (void)delUploadItem:(id)a0;
- (void)stopUploadAllFavItem;
- (BOOL)isFavItemOnUploading:(id)a0;
- (void)onProccessItem:(id)a0 inType:(unsigned long long)a1 ErrCode:(int)a2;
- (void)clearCdnInfo:(id)a0;
- (void)saveCdnInfoInData:(id)a0 forItem:(id)a1 isThumb:(BOOL)a2 withState:(int)a3;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)a0;
- (void)onUsedCapacityUpdate:(unsigned long long)a0;
- (void)updateCdnInfoInItem:(id)a0;
- (BOOL)needUploadData:(id)a0 ofType:(int)a1 inItem:(id)a2;
- (BOOL)needDownloadMsgOfData:(id)a0 inItem:(id)a1;
- (void)updateFavoritesItemCDNInfo:(id)a0 inItem:(id)a1;
- (void)reUploadFavItem:(id)a0;
- (BOOL)updateCdnInfo:(id)a0;
- (BOOL)deleteCdnInfo:(id)a0;
- (void)onRepairCheckFavItemAvailable:(unsigned int)a0 occupied:(BOOL *)a1;
- (unsigned long long)cleanCache;
- (BOOL)checkHasUnsafeTempFile:(id)a0;
- (unsigned long long)preCleanGetCacheSize;
- (void)triggerCapacityExeedFavItemListReUpload:(unsigned long long)a0 total:(unsigned long long)a1;
- (void).cxx_destruct;

@end
