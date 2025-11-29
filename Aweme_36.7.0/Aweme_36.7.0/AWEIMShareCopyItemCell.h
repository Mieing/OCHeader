@class UIImageView, UILabel;

@interface AWEIMShareCopyItemCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) UILabel *titleLabel;

- (void)__createComponents;
- (void)__layoutComponents;
- (void)configWithTransferType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
