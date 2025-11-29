@class UIImageView, UILabel, UIView;

@interface IESLiveBeautyCommonSupplementaryView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *headerDotView;
@property (retain, nonatomic) UIView *footerDotView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ tapCallBack;
@property (retain, nonatomic) UIView *separateView;

- (void)showHeaderView:(BOOL)a0;
- (void)layoutHeaderViewWithItem:(id)a0 withTapCallBack:(id /* block */)a1;
- (void)layoutFooterViewShowSeparate:(BOOL)a0;
- (void)hideSecondaryEffects;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
