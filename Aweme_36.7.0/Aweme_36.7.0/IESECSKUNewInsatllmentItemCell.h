@class UILabel, UIView;

@interface IESECSKUNewInsatllmentItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *installmentInfoLabel;
@property (retain, nonatomic) UILabel *commissionLabel;
@property (retain, nonatomic) UIView *whiteBGView;
@property (retain, nonatomic) UILabel *benefitLabel;
@property (retain, nonatomic) UIView *bgView;

+ (double)calCellWidthWithModel:(id)a0;

- (void)updateUIWithModel:(id)a0 State:(long long)a1 atmosphereColor:(id)a2;
- (void)updateWithModel:(id)a0 state:(long long)a1 atmosphereColor:(id)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
