@class AWEMateListTipCardView;

@interface AWEMateListTipCardCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEMateListTipCardView *cardView;
@property (copy, nonatomic) id /* block */ tapCloseButtonBlock;
@property (copy, nonatomic) id /* block */ primaryButtonBlock;
@property (copy, nonatomic) id /* block */ tapSecondaryButtonBlock;

- (void)configTitle:(id)a0 subtitle:(id)a1 iconUrl:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
