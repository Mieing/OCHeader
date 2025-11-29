@class MMLivePivotItemViewController;

@interface MMLivePivotCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) MMLivePivotItemViewController *pivotItemViewController;

+ (id)reuseId;

- (void)setPivotItemViewController:(id)a0 parentViewController:(id)a1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
