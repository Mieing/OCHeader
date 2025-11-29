@class UIImageView, CAKAlbumAssetModel;

@interface CAKAIMemoriesSearchListHeaderFloatImageIconView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAKAlbumAssetModel *assetModel;

- (void)updateAssetModelWithImage:(id)a0 assetModel:(id)a1;
- (int)fetchAsset:(id)a0 assetModel:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)updateImageWithAssetModel:(id)a0 imageCache:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
