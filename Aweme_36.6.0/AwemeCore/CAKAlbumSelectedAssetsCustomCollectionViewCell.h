@class UIImageView, CAKAlbumSelectedAssetsViewCustomCellItem;

@interface CAKAlbumSelectedAssetsCustomCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CAKAlbumSelectedAssetsViewCustomCellItem *cellItem;
@property (retain, nonatomic) UIImageView *imageView;

- (void)configWithCellItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)willDisplayCell;

@end
