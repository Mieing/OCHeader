@class UILabel, UIView;

@interface IESLiveCategorySectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIView *redDot;

+ (id)reuseIdentifier;

- (void)updateCellWithModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
