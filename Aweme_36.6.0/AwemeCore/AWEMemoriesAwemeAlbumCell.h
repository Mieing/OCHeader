@class UIImageView, AWEMemoriesPlayerTileModel, AWEAwemeModel;

@interface AWEMemoriesAwemeAlbumCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *tileModel;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
