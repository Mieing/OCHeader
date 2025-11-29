@class UILabel, DUXVacantView, UIStackView;

@interface AWEMateListEmptyCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXVacantView *emptyView;

- (void)updateEmptyStyle:(long long)a0 labelTitle:(id)a1 subtitle:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
