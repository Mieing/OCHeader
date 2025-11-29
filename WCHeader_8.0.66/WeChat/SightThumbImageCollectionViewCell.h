@class UIImage, UIImageView, NSIndexPath;

@interface SightThumbImageCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
