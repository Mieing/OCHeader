@class UIImageView;

@interface AWETeenSlidesClipCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *underImageView;
@property (retain, nonatomic) UIImageView *imageView;

- (void)p_setupViews;
- (void)p_updateImageViewSize;
- (long long)p_scaleModeWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setImageModel:(id)a0 placeholderImage:(id)a1 index:(long long)a2 totalCount:(long long)a3 logExtra:(id)a4;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
