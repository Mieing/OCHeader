@class WCFinderProfilePaidCollectionCellContentView;

@interface WCFinderProfilePaidCollectionCollectionCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderProfilePaidCollectionCellContentView *courseContentView;

+ (double)cellHeightWithPaidCollection:(id)a0 width:(double)a1;
+ (double)inlineSeperatorLeftInset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateWithPaidCollectin:(id)a0;
- (void).cxx_destruct;

@end
