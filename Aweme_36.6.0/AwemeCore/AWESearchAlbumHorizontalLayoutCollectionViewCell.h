@class BDImageView;

@interface AWESearchAlbumHorizontalLayoutCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *imageView;

+ (double)calculateWidthWithHeight:(double)a0 model:(id)a1;
+ (struct CGSize { double x0; double x1; })getImageSizeWithHeight:(double)a0 model:(id)a1;

- (id)getCurrentImageView;
- (void)updateImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
