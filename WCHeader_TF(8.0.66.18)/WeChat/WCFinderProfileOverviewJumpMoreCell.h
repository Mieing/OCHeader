@class UILabel, UIView;

@interface WCFinderProfileOverviewJumpMoreCell : UICollectionViewCell

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) UILabel *wordingLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } topLineEdgeInsets;
@property (retain, nonatomic) UIView *topLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutTopLine;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
