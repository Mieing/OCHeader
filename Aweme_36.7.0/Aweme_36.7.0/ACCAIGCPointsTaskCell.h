@class UIImageView, DUXDivider, UILabel, UIView;

@interface ACCAIGCPointsTaskCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *contentViewBG;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *pointsLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UILabel *finishLabel;
@property (retain, nonatomic) UIImageView *finishIcon;
@property (retain, nonatomic) DUXDivider *divider;

- (void)configureWithItem:(id)a0 isLastCell:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
