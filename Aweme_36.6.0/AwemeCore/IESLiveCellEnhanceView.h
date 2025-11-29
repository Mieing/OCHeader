@class UILabel, UIButton;

@interface IESLiveCellEnhanceView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ actionHandler;

- (void)actionButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setupLayout;

@end
