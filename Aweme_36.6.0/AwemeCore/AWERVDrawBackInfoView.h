@class UIImageView, UILabel, DUXButton;

@interface AWERVDrawBackInfoView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *subDescLabel;
@property (retain, nonatomic) DUXButton *actionButton;
@property (copy, nonatomic) id /* block */ actionButtonClicked;

- (void)updateSubLDescLabelWithCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
