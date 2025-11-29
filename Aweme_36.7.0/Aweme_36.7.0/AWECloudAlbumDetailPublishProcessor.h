@class NSArray, NSMutableDictionary, NSString, UIView, NSMutableArray, AWEAlbumDefaultViewModel;
@protocol AWECloudAlbumPublishProcessorDataSource, ACCTextLoadingViewProtcol, AWECloudAlbumPublishProcessorDelegate;

@interface AWECloudAlbumDetailPublishProcessor : NSObject <EcTaskChangeProtocol>

@property (weak, nonatomic) id<AWECloudAlbumPublishProcessorDataSource> dataSource;
@property (copy, nonatomic) NSArray *publishAssets;
@property (retain, nonatomic) NSMutableArray *lostAssets;
@property (retain, nonatomic) NSMutableDictionary *publishAssetDic;
@property (nonatomic) BOOL isDownloadTaskRunning;
@property (nonatomic) unsigned long long downloadFlag;
@property (retain, nonatomic) NSMutableArray *downloadAssets;
@property (nonatomic) long long saveIndex;
@property (nonatomic) long long retryDownloadNumber;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (nonatomic, getter=isCanceled) BOOL canceled;
@property (retain, nonatomic) AWEAlbumDefaultViewModel *albumViewModel;
@property (weak, nonatomic) id<AWECloudAlbumPublishProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskItemChanges:(id)a0;
- (void)taskProgressChanges:(id)a0;
- (void)taskStateChanges:(id)a0;
- (id)assetIDsWithAssets:(id)a0;
- (void)p_resetPublishState;
- (id)p_verifyAssets:(id)a0 errorTips:(id *)a1;
- (void)p_downloadAsset:(id)a0;
- (void)p_checkCloudDownloadComplete;
- (void)p_fetchSandBoxPublishModelWithAssets:(id)a0 cloudAssets:(id)a1;
- (void)p_fetchLocalPublishModelWithLocalAssets:(id)a0 cloudAssets:(id)a1;
- (BOOL)p_fetchCloudPublishModelWithAssets:(id)a0;
- (void)p_checkDownloadComplete;
- (void)p_startDownloadCloudAsset:(id)a0;
- (void)p_gotoEditPage;
- (id)generateAlbumViewModelWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)publish:(id)a0;

@end
