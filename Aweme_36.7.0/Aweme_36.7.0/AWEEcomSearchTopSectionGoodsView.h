@class UIButton, AWEDynamicPatchModel, AWEEcommerceSearchLynxBaseView;

@interface AWEEcomSearchTopSectionGoodsView : UIView

@property (retain, nonatomic) AWEEcommerceSearchLynxBaseView *lynxView;
@property (retain, nonatomic) AWEDynamicPatchModel *patchModel;
@property (retain, nonatomic) UIButton *rightButton;
@property (nonatomic) BOOL hideInitially;
@property (copy, nonatomic) id /* block */ rightButtonDidClicked;
@property (nonatomic) long long type;

- (void)configUI;
- (void)preloadLynxWithModel:(id)a0;
- (void)lynxViewSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)updateGoodsInfo:(id)a0;
- (void)rightButtonAction:(id)a0;
- (void)scrollWithProgress:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
