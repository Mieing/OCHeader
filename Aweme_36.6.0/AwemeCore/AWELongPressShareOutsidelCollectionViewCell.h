@class UIImageView, AWEShareItem, UILabel, UIView;

@interface AWELongPressShareOutsidelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *imageBackView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) AWEShareItem *item;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (void)setUpUI;

@end
