@class UIImage, CAKAlbumCollectionItemModel, CAKAlbumAssetModel, DUXBaseImageView, UIView, DUXBaseLabel;

@interface CAKAlbumInsightCollectItemCell : UICollectionViewCell

@property (retain, nonatomic) DUXBaseImageView *coverImageView;
@property (retain, nonatomic) UIView *gradientOverlayView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *subTitleLabel;
@property (retain, nonatomic) CAKAlbumCollectionItemModel *collectionItem;
@property (retain, nonatomic) CAKAlbumAssetModel *assetModel;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) int imageRequestID;

+ (struct CGSize { double x0; double x1; })collectionCardSize;

- (void)updateAssetModelWithImage:(id)a0 assetModel:(id)a1;
- (int)fetchAsset:(id)a0 assetModel:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)setupGradientOverlay;
- (void)updateCoverImageWithAsset:(id)a0 imageCache:(id)a1;
- (void)configureCellWithCollectionItem:(id)a0 imageCache:(id)a1 index:(long long)a2 counts:(long long)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
