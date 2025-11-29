@class UIImageView, AWESearchPhotoSearchTabViewModel, UIView;

@interface AWESearchPhotoSearchTabViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) AWESearchPhotoSearchTabViewModel *model;

- (void)configUI;
- (void)updateImage:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
