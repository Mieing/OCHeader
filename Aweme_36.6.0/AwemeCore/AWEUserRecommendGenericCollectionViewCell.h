@class UIView;
@protocol AWEUserRecommendCellViewProtocol;

@interface AWEUserRecommendGenericCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView<AWEUserRecommendCellViewProtocol> *basicView;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
