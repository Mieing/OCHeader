@class UIImageView, UILabel;

@interface AWEIMChangeChatBgListCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UILabel *defaultLabel;

- (void)configWithModel:(id)a0 didSelect:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
