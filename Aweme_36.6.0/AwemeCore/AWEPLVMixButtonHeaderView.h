@class UIImageView, NSMutableSet, UILabel, UIView, NSMutableArray;

@interface AWEPLVMixButtonHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) NSMutableSet *hiddenButtonSet;
@property (retain, nonatomic) NSMutableArray *displayingButtonList;

+ (double)heightWithBreakPoint:(struct { long long x0; long long x1; })a0;

- (void)updateTitleIcon:(id)a0;
- (void)updateViewForBreakPoint;
- (void)updateContainerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)insertButtonWithImage:(id)a0 title:(id)a1 action:(id /* block */)a2;
- (void)insertButtonWithImage:(id)a0 action:(id /* block */)a1;
- (void)insertButtonWithTitle:(id)a0 action:(id /* block */)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)setTitleFontSize:(long long)a0;
- (void)updateTitle:(id)a0;

@end
