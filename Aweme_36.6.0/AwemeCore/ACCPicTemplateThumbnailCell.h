@class UIImageView, UIView;

@interface ACCPicTemplateThumbnailCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *shadowView;

- (void)configHighlightWithSelected:(BOOL)a0;
- (void)configThumbnailImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
