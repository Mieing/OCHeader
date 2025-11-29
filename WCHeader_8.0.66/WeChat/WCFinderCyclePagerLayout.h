@class WCFinderCyclePagerViewLayoutParams;

@interface WCFinderCyclePagerLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) WCFinderCyclePagerViewLayoutParams *layoutParams;

- (id)init;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void).cxx_destruct;

@end
