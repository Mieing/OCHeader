@class UILabel, IESECGoodsDetailLongTitleTagInfoView;

@interface IESECGoodsDetailContentLabelContainerView : UIView

@property (retain, nonatomic) IESECGoodsDetailLongTitleTagInfoView *contentInfoView;
@property (retain, nonatomic) UILabel *headLabel;

- (void)configureWithContentLabelItems:(id)a0 leadingGap:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
