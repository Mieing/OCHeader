@class NSMutableArray, DVEMultipleTrackViewModel;

@interface DVEMultipleTrackViewFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *layoutAttributes;
@property (retain, nonatomic) DVEMultipleTrackViewModel *viewModel;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initWithViewModel:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
