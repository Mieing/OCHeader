@class UILabel, UIImageView, UIView;

@interface AWEIMCommonNavigationView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *leftBtnsContainerView;
@property (retain, nonatomic) UIView *rightBtnsContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;

- (void)addRightNaviBarBtnView:(id)a0;
- (void)addLeftNaviBarBtnView:(id)a0;
- (void)p_updateTitleViewConstrains;
- (void)addTitleLabel:(id)a0;
- (void)addArrowImgView:(id)a0;
- (void)addTitleView:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNavTitle:(id)a0;

@end
