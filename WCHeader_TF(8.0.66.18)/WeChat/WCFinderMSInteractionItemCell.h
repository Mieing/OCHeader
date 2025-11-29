@class UILabel;

@interface WCFinderMSInteractionItemCell : UICollectionViewCell

@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;

+ (double)titleWidthWithInteractionItem:(id)a0;
+ (double)heightWithInteractionItem:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_layoutUI;
- (void)updateWithInteractionItem:(id)a0;
- (void).cxx_destruct;

@end
