@class NSMutableArray;

@interface AWEBaseListSimpleWaterfallLayout : AWEBaseListBaseWaterfallLayout

@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;

- (void)awelistkit_updateInitialLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isInserted:(BOOL)a2;
- (void)awelistkit_updateFinalLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isDeleted:(BOOL)a2;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
