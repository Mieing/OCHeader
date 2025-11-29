@class UILabel;

@interface IESGCPGameAwardsViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)configCellWithTitle:(id)a0 subTitle:(id)a1;
- (void)configCellWithIndexPath:(id)a0 awardContent:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
