@interface RTVListViewFlowLayout : UICollectionViewFlowLayout

@property (readonly, nonatomic) double minContentSize;

- (void)updateMinContentSize:(double)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;

@end
