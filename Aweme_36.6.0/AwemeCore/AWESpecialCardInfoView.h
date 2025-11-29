@class UILabel;

@interface AWESpecialCardInfoView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *content;

- (void)updateTitle:(id)a0 content:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupInfoView;

@end
