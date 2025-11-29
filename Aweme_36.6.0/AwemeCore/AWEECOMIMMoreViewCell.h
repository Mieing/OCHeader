@class UIImageView, UIView, UILabel, AWEECOMIMMoreItem;

@interface AWEECOMIMMoreViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEECOMIMMoreItem *item;
@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *remindView;

+ (id)identity;

- (void)hideRemindView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
