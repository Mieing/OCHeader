@class UIButton;

@interface AWETeenSearchHistoryFooterView : UICollectionReusableView

@property (retain, nonatomic) UIButton *btn;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)p_footerButtonAction;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
