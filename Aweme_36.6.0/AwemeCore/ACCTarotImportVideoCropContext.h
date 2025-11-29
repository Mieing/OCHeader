@class AWEAssetModel, AWEVideoPublishViewModel, AWEAssetsFragmentInfo, AWEAssetsCropAndClipManager;

@interface ACCTarotImportVideoCropContext : NSObject

@property (retain, nonatomic) AWEAssetsCropAndClipManager *clipManager;
@property (copy, nonatomic) id /* block */ resultCompleted;
@property (retain, nonatomic) AWEAssetsFragmentInfo *fragmentInfo;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) double cropMaxDuration;
@property (retain, nonatomic) AWEAssetModel *assetModel;

+ (BOOL)canEnterCropPageWith:(id)a0 assets:(id)a1;

- (void)showCropPageWith:(id)a0 publishViewModel:(id)a1 assets:(id)a2 completion:(id /* block */)a3;
- (void)bindMessageHandler;
- (void)sendCropShowTrackWith:(id)a0;
- (void)destroyInfo;
- (void)destroyClipInstance;
- (void).cxx_destruct;

@end
