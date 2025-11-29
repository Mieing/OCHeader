@class NSMutableDictionary, AWEAwemeModel, AWETeenSaveButtonModel, AWETeenPlayInteractionContext, AWEMediaDownloadInfo;
@protocol AWETeenSaveDataCenterDelegate;

@interface AWETeenSaveDataCenter : NSObject

@property (retain, nonatomic) AWETeenSaveButtonModel *buttonModel;
@property (retain, nonatomic) AWEMediaDownloadInfo *downloadInfo;
@property (retain, nonatomic) AWEAwemeModel *videoModel;
@property (retain, nonatomic) AWETeenPlayInteractionContext *context;
@property (retain, nonatomic) NSMutableDictionary *teenFeedVideoCachedFileURLs;
@property (nonatomic) BOOL succeedSavingToAlbum;
@property (nonatomic) double downloadStartTime;
@property (weak, nonatomic) id<AWETeenSaveDataCenterDelegate> delegate;

+ (void)downloadMediaWithOptions:(id)a0 completion:(id /* block */)a1;
+ (void)showDownloadSuccessToastWithOptions:(id)a0;
+ (void)showDownloadFailedToastWithOptions:(id)a0 result:(id)a1;
+ (void)downloadAweme:(id)a0 indicesToDownload:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
+ (id)downloadButtonModelForAwemeModel:(id)a0;
+ (void)downloadAweme:(id)a0 indicesToDownload:(id)a1 enterFrom:(id)a2 logExtraDict:(id)a3 completion:(id /* block */)a4;
+ (void)downloadAweme:(id)a0 indicesToDownload:(id)a1 enterFrom:(id)a2 logExtraDict:(id)a3 progressBlock:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)downloadAweme:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
+ (id)sharedInstance;

- (unsigned long long)getCurrentDownloadStatus:(id)a0;
- (BOOL)localCachedFileAlreadyExistForAwemeID:(id)a0;
- (id)destinationURLForURI:(id)a0;
- (void)updateWithAwemeModel:(id)a0;
- (void)updateWithAwemeModel:(id)a0 context:(id)a1;
- (void)p_updateCellStyle:(unsigned long long)a0;
- (void)recordCachedFileURL:(id)a0 forAwemeID:(id)a1;
- (void)downloadFileIfNeeded;
- (void)cancelDownloading;
- (void)p_downloadFile;
- (id)teenFeedCachedFileURLForAwemeID:(id)a0;
- (void)p_updateLoadingResult:(BOOL)a0 errorMsg:(id)a1;
- (void)p_updateProgressOfLoading:(double)a0;
- (void).cxx_destruct;

@end
