@class UIImageView, MMUILabel;

@interface WCTimeLineAdLookbookCardFooterView : UICollectionReusableView

@property (retain, nonatomic) MMUILabel *slideTitleLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateFooterWithTitle:(id)a0;
- (void).cxx_destruct;

@end
