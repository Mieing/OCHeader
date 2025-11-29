@class NSMutableArray, NSMutableDictionary;

@interface AWEMVSectionWaterfallLayout : AWEBaseListBaseWaterfallLayout

@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *columnExtendRightCounts;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *headersAttributes;
@property (retain, nonatomic) NSMutableDictionary *footersAttributes;
@property (retain, nonatomic) NSMutableArray *unionRects;
@property (nonatomic) long long sectionColumnCount;
@property (nonatomic) double verticalSpacing;
@property (nonatomic) double horizontalSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } totalSectionsInset;
@property (copy, nonatomic) id /* block */ sectionOccupyColumnCount;

- (void)awelistkit_updateInitialLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isInserted:(BOOL)a2;
- (void)awelistkit_updateFinalLayoutAttributes:(id)a0 forAppearingCellAtIndexPath:(id)a1 isDeleted:(BOOL)a2;
- (void)buildUnionRects;
- (unsigned long long)longestColumnIndex;
- (unsigned long long)shortestColumnIndexWithOccupyColumnCount:(unsigned long long)a0;
- (void)updateColumnHeightWithStartIndex:(long long)a0 occupyColumnCount:(long long)a1 height:(double)a2;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
