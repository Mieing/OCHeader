@class NSLayoutConstraint, UILabel, BDPCheckBox, BDPScopeItem;

@interface BDPListPermissionContentViewCell : UITableViewCell

@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) BDPScopeItem *item;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *titleBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelRightConstraint;
@property (copy, nonatomic) id /* block */ handler;

- (void)setupConstraint;
- (void)updateCellWithItem:(id)a0 indexPath:(id)a1;
- (void)onCheckBoxTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
