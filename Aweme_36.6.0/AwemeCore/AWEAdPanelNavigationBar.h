@class UIButton, UILabel, UIView;

@interface AWEAdPanelNavigationBar : UIView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *reportButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIView *bottomSeparator;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
