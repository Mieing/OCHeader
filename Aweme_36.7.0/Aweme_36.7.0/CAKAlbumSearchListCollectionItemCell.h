@class UIImageView, CAKAlbumAssetModel, DUXBaseImageView, UILabel, UIImage;

@interface CAKAlbumSearchListCollectionItemCell : UICollectionViewCell

@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (retain, nonatomic) UIImageView *favoriteImageView;
@property (retain, nonatomic) UIImageView *livephotoTag;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CAKAlbumAssetModel *assetModel;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) long long currentIndex;
@property (nonatomic) int imageRequestID;
@property (readonly, nonatomic) UILabel *titleLabel;

+ (struct CGSize { double x0; double x1; })collectionItemCellSize;

- (void)updateAssetModelWithImage:(id)a0 assetModel:(id)a1;
- (int)fetchAsset:(id)a0 assetModel:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)updateCoverImageWithAsset:(id)a0 imageCache:(id)a1;
- (void)configureCellWithAsset:(id)a0 imageCache:(id)a1 index:(long long)a2 counts:(long long)a3;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
