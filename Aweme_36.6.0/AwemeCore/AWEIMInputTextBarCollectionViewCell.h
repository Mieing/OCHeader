@class UILabel, UIVisualEffectView, UIView;

@interface AWEIMInputTextBarCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)identifier;

- (void)renderWithViewModel:(id)a0;
- (void)p_createComponents;
- (void)p_layoutComponents;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
