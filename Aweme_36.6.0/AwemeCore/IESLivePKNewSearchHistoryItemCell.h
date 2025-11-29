@class UILabel;

@interface IESLivePKNewSearchHistoryItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *searchHistoryLabel;

- (void)updateHistoryLabel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
