@class UILabel, AWEButton, UIView;

@interface AWEIAPStoreNavigationBar : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEButton *backBtn;
@property (retain, nonatomic) UIView *bottomLineView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
