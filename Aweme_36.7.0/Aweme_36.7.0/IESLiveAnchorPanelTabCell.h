@class UILabel;

@interface IESLiveAnchorPanelTabCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *tabTitle;

+ (id)identifier;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI:(id)a0;

@end
