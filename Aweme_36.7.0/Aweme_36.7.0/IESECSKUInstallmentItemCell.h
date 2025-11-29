@class UILabel, UIView;

@interface IESECSKUInstallmentItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *installmentInfoLabel;
@property (retain, nonatomic) UILabel *commissionLabel;
@property (retain, nonatomic) UILabel *benefitLabel;
@property (retain, nonatomic) UIView *bgView;

- (void)updateWithModel:(id)a0 state:(long long)a1;
- (void)updateTopRightLabelCorner;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUIWithState:(long long)a0;

@end
