@class UIImageView, UILabel, AWEAnchorAdditionCellModel;

@interface AWEAnchorAdditionHorizontalItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *markLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEAnchorAdditionCellModel *cellModel;

- (BOOL)shouldShowMarkWithCellModel:(id)a0;
- (void)updateUIWithCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
