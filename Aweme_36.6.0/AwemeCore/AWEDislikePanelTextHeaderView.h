@class UILabel;

@interface AWEDislikePanelTextHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *title;

- (void)configWithTitle:(id)a0 iconURLStr:(id)a1 placeHolder:(id)a2;
- (void)configWithTitle:(id)a0 iconURLStr:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
