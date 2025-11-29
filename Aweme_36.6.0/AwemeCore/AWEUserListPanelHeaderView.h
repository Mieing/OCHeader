@class UILabel, UIButton;

@interface AWEUserListPanelHeaderView : UIView

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *tipButton;
@property (nonatomic) BOOL isBGColorWhite;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
