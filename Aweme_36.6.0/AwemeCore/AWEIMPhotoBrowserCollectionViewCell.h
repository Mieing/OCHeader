@class NSString, AWEIMEditedAssetModel, AWEIMPhotoBrowserZoomableView;
@protocol AWEIMAssetBrowserCollectionViewCellDelegate;

@interface AWEIMPhotoBrowserCollectionViewCell : UICollectionViewCell <AWEIMPhotoBrowserZoomableViewDelegate, AWEIMAssetBrowserCollectionViewProtocol>

@property (retain, nonatomic) AWEIMPhotoBrowserZoomableView *browserZoomView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMAssetBrowserCollectionViewCellDelegate> assetTapDelegate;
@property (weak, nonatomic) AWEIMEditedAssetModel *editedModel;

+ (id)identifier;

- (void)didTapZoomableView:(id)a0;
- (id)transitionEndView;
- (void).cxx_destruct;
- (void)setAsset:(id)a0;
- (void)prepareForReuse;
- (void)setIndexPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
