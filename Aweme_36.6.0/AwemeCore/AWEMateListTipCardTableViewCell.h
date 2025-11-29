@class AWEMateListTipCardView;

@interface AWEMateListTipCardTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEMateListTipCardView *cardView;
@property (copy, nonatomic) id /* block */ tapCloseButtonBlock;
@property (copy, nonatomic) id /* block */ primaryButtonBlock;
@property (copy, nonatomic) id /* block */ tapSecondaryButtonBlock;

- (void)configTitle:(id)a0 subtitle:(id)a1 iconUrl:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
