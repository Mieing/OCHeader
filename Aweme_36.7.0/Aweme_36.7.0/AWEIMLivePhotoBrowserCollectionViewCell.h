@class AWEIMEditedAssetModel, NSString, PHLivePhotoView, AWEIMSectorProgressView, PHAsset, AWEIMPhotoBrowserZoomableView, UITapGestureRecognizer;
@protocol AWEIMAssetBrowserCollectionViewCellDelegate;

@interface AWEIMLivePhotoBrowserCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, PHLivePhotoViewDelegate, AWEIMAssetBrowserCollectionViewProtocol>

@property (retain, nonatomic) PHLivePhotoView *livePhotoView;
@property (retain, nonatomic) UITapGestureRecognizer *singleTap;
@property (retain, nonatomic) PHAsset *liveAsset;
@property (retain, nonatomic) AWEIMSectorProgressView *loadingView;
@property (nonatomic) BOOL disableTapResponse;
@property (nonatomic) BOOL hasTriggeredPlay;
@property (retain, nonatomic) AWEIMPhotoBrowserZoomableView *backUpImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMAssetBrowserCollectionViewCellDelegate> assetTapDelegate;
@property (weak, nonatomic) AWEIMEditedAssetModel *editedModel;

+ (id)identifier;

- (id)transitionEndView;
- (void)playLivePhotoIfNeeded;
- (id)livePhotoRequestOptions;
- (void)singleTapped:(id)a0;
- (void)showBackupImageViewWhenLivePhotoGenerateFailed;
- (void)fetchStaticImage:(id /* block */)a0;
- (id)findLivePhotoCoverImageView:(id)a0;
- (void)stopPlayLivePhoto;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setAsset:(id)a0;
- (void)prepareForReuse;
- (void)setIndexPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
