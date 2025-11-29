@class NSMutableArray;

@interface AWEBaseListComplicatedWaterfallLayout : AWEBaseListBaseWaterfallLayout

@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;

+ (Class)customDecorationViewClass;

- (void)awelistkit_updateInitialLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isInserted:(BOOL)a2;
- (void)awelistkit_updateFinalLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isDeleted:(BOOL)a2;
- (id)awelistkit_extraLayoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
