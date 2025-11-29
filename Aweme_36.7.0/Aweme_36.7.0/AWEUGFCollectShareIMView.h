@class UIImageView, UILabel;

@interface AWEUGFCollectShareIMView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *capsuleView;
@property (retain, nonatomic) UILabel *capsuleLabel;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)titleTextColorForStyle:(unsigned long long)a0;
+ (id)imageBadgeColor;
+ (struct CGSize { double x0; double x1; })capsuleSize;
+ (struct CGSize { double x0; double x1; })iconSize;
+ (double)iconTitlePadding;

- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
