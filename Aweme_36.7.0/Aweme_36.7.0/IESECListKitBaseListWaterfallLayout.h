@class NSMutableArray, NSMutableDictionary;
@protocol IESECListKitBaseListWaterfallLayoutDelegate;

@interface IESECListKitBaseListWaterfallLayout : IESECListKitBaseListBaseWaterfallLayout

@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *sectionOriginStickerHeaderSticked;
@property (retain, nonatomic) NSMutableDictionary *sectionOriginStickerHeaderFrameY;
@property (weak, nonatomic) id<IESECListKitBaseListWaterfallLayoutDelegate> baseDelegate;
@property (nonatomic) BOOL enableStickHeader;
@property (nonatomic) BOOL shiftBackgroundView;

- (BOOL)shouldStickHeaderAtSection:(long long)a0;
- (long long)columnCountForSection:(long long)a0;
- (unsigned long long)longestColumnIndexInSection:(long long)a0;
- (unsigned long long)shortestColumnIndexInSection:(long long)a0;
- (id)ieseclistkit_extraLayoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)ieseclistkit_updateInitialLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isInserted:(BOOL)a2;
- (void)ieseclistkit_updateFinalLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isDeleted:(BOOL)a2;
- (void)lifecycleForPrepareForCollectionViewUpdates:(id)a0;
- (BOOL)isSectionHeaderSticked:(long long)a0;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)a0;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;

@end
