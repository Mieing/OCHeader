@class UILabel, DUXButton;

@interface AWERebindRuleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *ruleLabel1;
@property (retain, nonatomic) UILabel *ruleLabel2;
@property (retain, nonatomic) UILabel *ruleLabel3;
@property (retain, nonatomic) DUXButton *primaryButton;
@property (copy, nonatomic) id /* block */ confirmActionBlock;

- (id)configRuleWithRule:(id)a0 highlight:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)confirmAction;

@end
