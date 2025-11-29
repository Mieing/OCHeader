@class UIImageView, UILabel;

@interface AWEUGFCollectShareSuccessToast : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (void)showToastWithGoldAmount:(long long)a0 text:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (void)showToastWithGoldAmount:(long long)a0;
+ (struct CGSize { double x0; double x1; })iconSize;
+ (struct CGSize { double x0; double x1; })viewSize;
+ (double)iconTitlePadding;

- (void)setupSubViews;
- (void).cxx_destruct;
- (id)init;

@end
