@class AWEMediaDownloadInfo, AWEShareLoadingCellModel, NSDictionary, NSMutableArray, AWEShareThirdPlatformCellModel;
@protocol AWEShareSaveAlbumDataCenterDelegate;

@interface AWEShareSaveAlbumDataCenter : NSObject

@property (copy, nonatomic) NSDictionary *context;
@property (retain, nonatomic) AWEShareLoadingCellModel *loadingCellModel;
@property (retain, nonatomic) AWEShareThirdPlatformCellModel *thirdPlatformCellModel;
@property (retain, nonatomic) AWEMediaDownloadInfo *downloadInfo;
@property (nonatomic) BOOL isCancelByButton;
@property (readonly, nonatomic) NSMutableArray *cellModels;
@property (weak, nonatomic) id<AWEShareSaveAlbumDataCenterDelegate> delegate;
@property (nonatomic) BOOL successfullySavedToAlbum;

+ (BOOL)localCachedFileAlreadyExistForAwemeID:(id)a0;
+ (id)feedCachedFileURLForAwemeID:(id)a0;
+ (id)downloadCellModelForContext:(id)a0;
+ (BOOL)localCachedFileAlreadyExistForContext:(id)a0;
+ (id)thirdPlatformCellModelForContext:(id)a0;
+ (id)saveTitleViewModelForContext:(id)a0;
+ (id)shareChannelResourceMetricPathWithContext:(id)a0;
+ (void)p_saveMediaToAlbumOnCompletion:(id)a0 completion:(id /* block */)a1;
+ (void)recordCachedFileURL:(id)a0 forAwemeID:(id)a1;
+ (id)feedCachedFileURLForContext:(id)a0;
+ (void)saveVideoFile:(id)a0 withDate:(id)a1 toAlbumOnCompletion:(id /* block */)a2;
+ (void)initialize;
+ (void)clearCache;

- (void)stopNetworkMonitoring;
- (void)trackSendWeixinCellShow;
- (void)p_updateCellStyle:(unsigned long long)a0;
- (void)p_updateProgressOfLoadingCell:(double)a0;
- (void)p_updateLoadingCellResult:(BOOL)a0 errMsg:(id)a1;
- (void)p_downloadFileIfNeededWithProgress:(id /* block */)a0 onCompletion:(id /* block */)a1;
- (void)p_addThirdPlatformCell;
- (void)p_insertCellModel:(id)a0 afterModelOfClass:(Class)a1 completion:(id /* block */)a2;
- (void)prepareViewModelsOnCompletion:(id /* block */)a0;
- (void)downloadFileIfNeeded;
- (void)saveFileIfNeeded;
- (double)totalContentHeight;
- (void)cancelDownloadingWithStyle:(unsigned long long)a0;
- (id)p_getDownloadAwemeModel;
- (void)downloadFile;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)startNetworkMonitoring;

@end
