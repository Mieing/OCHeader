@interface MMLiveRewardGiftLayout : UICollectionViewFlowLayout

@property (nonatomic) long long rowCount;
@property (nonatomic) long long columCount;

- (struct { long long x0; long long x1; long long x2; })visualLocationForCellAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithinPageForCellAtIndex:(unsigned long long)a0;

@end
