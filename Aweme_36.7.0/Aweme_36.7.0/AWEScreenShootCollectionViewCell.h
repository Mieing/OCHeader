@class UIImageView, UILabel, AWEScreenShootBaseViewModel;

@interface AWEScreenShootCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) AWEScreenShootBaseViewModel *screenShootViewModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (void)setUpUI;

@end
