@class AFDRecommendPanelUserListCellView;

@interface AFDRecommendPanelUserListCell : UICollectionViewCell

@property (retain, nonatomic) AFDRecommendPanelUserListCellView *basicView;

+ (double)contentHeightWithConfig:(id)a0;

- (void)setupWithConfig:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
