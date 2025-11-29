@class UIButton, NSString, UIImageView, CAKAlbumAssetModel, UIView, CAKCircularProgressView, UILabel;
@protocol CAKCommonConfigProtocol;

@interface ACCAlbumSelectedAssetsCollectionViewCell : UICollectionViewCell <CAKAssetEditResultObserver>

@property (retain, nonatomic) id<CAKCommonConfigProtocol> commonConfig;
@property (retain, nonatomic) CAKCircularProgressView *circularProgressView;
@property (retain, nonatomic) CAKAlbumAssetModel *assetModel;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *mediaTypeImageView;
@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (copy, nonatomic) id /* block */ deleteAssetModelBlock;
@property (nonatomic) BOOL animationFinished;
@property (nonatomic) BOOL shouldHighlight;
@property (nonatomic) BOOL shouldAdjustPreviewPage;
@property (nonatomic) long long sourceType;
@property (nonatomic) int requestImageID;
@property (retain, nonatomic) UIImageView *iCloudErrorImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndDisplayingCell;
- (BOOL)topVCIsPreviewVC;
- (void)runScaleAnimationWithCallback:(id /* block */)a0;
- (void)configCircularProgressView;
- (void)addIsShowingInPreviewKVO;
- (void)configImageViewWithCache:(id)a0;
- (void)deleteBtnClicked:(id)a0;
- (void)updateLivePhotoState:(long long)a0;
- (void)updateCurrentCellBorderIfNeed:(BOOL)a0;
- (void)updateCellBorderIfPreviewing:(BOOL)a0;
- (void)assetEditResultDidChange;
- (void)configAlbumSelectedAssetWithAsset:(id)a0 withCache:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willDisplayCell;

@end
