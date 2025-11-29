@class NSString, NSTimer, NSMutableSet, NSMutableArray, FavDataItemWrap;
@protocol FavDataBatchSaveLogicDelegate;

@interface FavDataBatchSaveLogic : NSObject <IFavCdnDownloadMgrExt>

@property (retain, nonatomic) NSMutableArray *pendingItems;
@property (retain, nonatomic) NSMutableSet *downloadingDataIds;
@property (nonatomic) long long savedCount;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) BOOL shouldCancel;
@property (retain, nonatomic) FavDataItemWrap *currentDownloadingItem;
@property (retain, nonatomic) NSTimer *downloadTimeoutTimer;
@property (weak, nonatomic) id<FavDataBatchSaveLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)saveMultipleFavDataItems:(id)a0;
- (void)checkAlbumPermissionAndStart;
- (void)startSavingNextItem;
- (void)saveSingleFavData:(id)a0;
- (void)saveImageToAlbum:(id)a0 favData:(id)a1;
- (void)saveVideoToAlbum:(id)a0 favData:(id)a1;
- (void)onSingleSaveComplete:(BOOL)a0;
- (void)onSaveComplete:(BOOL)a0;
- (void)cleanupDownloadState;
- (void)cancel;
- (id)getFilePathForFavData:(id)a0;
- (BOOL)isVideoData:(id)a0;
- (BOOL)isImageData:(id)a0;
- (BOOL)shouldDownloadFromCDN:(id)a0;
- (void)startDownloadFavData:(id)a0;
- (id)getDownloadKeyForFavData:(id)a0;
- (void)OnFavCdnDownload:(id)a0 TotalLength:(unsigned long long)a1 FinishLength:(unsigned long long)a2;
- (void)OnFavCdnDownload:(id)a0 RetCode:(int)a1;
- (void)startDownloadTimeoutTimer;
- (void)invalidateDownloadTimer;
- (void)onDownloadTimeout;
- (void).cxx_destruct;

@end
