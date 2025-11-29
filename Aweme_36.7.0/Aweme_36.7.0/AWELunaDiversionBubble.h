@class UIImageView, UILabel;

@interface AWELunaDiversionBubble : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *title;

- (void)updateTitle:(id)a0 iconUrls:(id)a1 bgColor:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
