@class AFDMomentCameraPreviewViewModel, NSString;
@protocol AFDMomentCameraFlowService;

@interface AWEIMExchangeAlbumRandomViewModel : AFDMomentCameraBaseViewModel

@property (nonatomic) BOOL isPreLoading;
@property (nonatomic) BOOL isBeginRandom;
@property (nonatomic) BOOL shouldShowRandomView;
@property (nonatomic) BOOL shouldShowRandomButton;
@property (nonatomic) BOOL isRandonResult;
@property (nonatomic) double imageLoadSize;
@property (readonly, weak, nonatomic) AFDMomentCameraPreviewViewModel *previewViewModel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) NSString *lastAssetIdentifier;

+ (id)p_fetchPHAssetsResult;

- (void)setupViewModel;
- (void)p_updateWithState:(long long)a0;
- (id)p_resizeImage:(id)a0;
- (double)getRandomAnimationCount;
- (double)getRandomAnimationInterval;
- (void)loadICloudPhotoWithPHAsset:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)loadPictureRandomWithCompletion:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadPictureRandomWithCompletionOptimize:(BOOL)a0 completion:(id /* block */)a1;
- (id)handleResourceArraySize:(id)a0;
- (void)resetPreLoadingState:(BOOL)a0;
- (void)loadBatchsPhotoWithIndex:(int)a0 loadCount:(int)a1 photos:(id)a2 hightQualityImages:(id)a3 deliveryMode:(long long)a4 needFilter:(BOOL)a5 completion:(id /* block */)a6;
- (void)loadBatchsPhotoWithIndex:(int)a0 loadCount:(int)a1 photos:(id)a2 hightQualityImages:(id)a3 deliveryMode:(long long)a4 completion:(id /* block */)a5;
- (void)loadHighQualityPhotoWithModel:(id)a0 deliveryMode:(long long)a1 needDonwloadICloud:(BOOL)a2 completion:(id /* block */)a3;
- (void)loadPhotosBytesWithArray:(id)a0 deliveryMode:(long long)a1 completion:(id /* block */)a2;
- (double)getRandomAnimationDuration;
- (void)setBeginRandom:(BOOL)a0;
- (id)getRandomAnimationConfigDic;
- (void).cxx_destruct;

@end
