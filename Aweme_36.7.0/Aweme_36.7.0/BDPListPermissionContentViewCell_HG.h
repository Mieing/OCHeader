@class UIView, BDPCellButton_HG, NSLayoutConstraint, UILabel, BDPCheckBox, BDPScopeItem;

@interface BDPListPermissionContentViewCell_HG : UITableViewCell

@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) BDPScopeItem *item;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *topBorder;
@property (retain, nonatomic) UIView *bottomBorder;
@property (retain, nonatomic) BDPCellButton_HG *tipsButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSLayoutConstraint *bottomBorderTipTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomBorderTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleTipBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelRightConstraint2;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ expendBlock;

- (void)setupConstraint;
- (void)updateCellWithItem:(id)a0 indexPath:(id)a1;
- (void)onCheckBoxTap:(id)a0;
- (void)tipsButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
