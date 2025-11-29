@class UIColor, UIView;

@interface AWEBaseListSectionSeparator : UICollectionReusableView

@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) struct AWEListKitSeparatorInsets { double left; double right; } separatorInsets;
@property (retain, nonatomic) UIColor *separatorColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
