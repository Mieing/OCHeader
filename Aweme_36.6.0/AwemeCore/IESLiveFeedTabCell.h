@class UILabel, UIView;

@interface IESLiveFeedTabCell : UICollectionViewCell

@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL currentSelected;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
