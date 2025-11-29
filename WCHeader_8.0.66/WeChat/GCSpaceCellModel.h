@class UIColor;

@interface GCSpaceCellModel : GCBaseCellModel

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cellHeight;

- (struct CGSize { double x0; double x1; })cellSizeForCollectionView:(id)a0;
- (id)cellReuseIdentifier;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
