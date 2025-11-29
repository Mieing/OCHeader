@class NSArray, NSSet, NSDictionary, NSIndexSet, RxRTree;
@protocol RxCollectionLayoutAuxillaryHosting, RxCollectionLayoutAuxillaryOffsets;

@interface RxCollectionLayoutAuxillaryItemSolver : NSObject {
    long long _memoizedSupplementaryKind;
    NSArray *_memoizedAuxillaryItems;
    id<RxCollectionLayoutAuxillaryHosting> _auxillaryHost;
    struct RxDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _hostContentInsets;
}

@property (retain, nonatomic) NSArray *frames;
@property (retain, nonatomic) RxRTree *supplementaryItemGeometricIndexer;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } hostContentSizeInsets;
@property (nonatomic) BOOL hasEstimatedSizes;
@property (readonly, nonatomic) id<RxCollectionLayoutAuxillaryHosting> auxillaryHost;
@property (readonly, nonatomic) NSSet *elementKinds;
@property (readonly, nonatomic) NSDictionary *enrolledSupplementaryFramesDict;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } hostContentOffset;
@property (readonly, nonatomic) NSArray *memoizedAuxillaryItems;
@property (readonly, nonatomic) long long memoizedSupplementaryKind;
@property (readonly, nonatomic) id<RxCollectionLayoutAuxillaryOffsets> supplementariesThatCanAffectContentSize;
@property (readonly, nonatomic) NSDictionary *supplementaryFramesKeyedByKindIndex;
@property (readonly, nonatomic) BOOL contentSizeDiffersFromHostContentSize;
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (readonly, nonatomic) NSArray *supplementaryFrames;

- (void)__solveForPinning:(BOOL)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_effectiveBoundarySupplementrayItem:(id)a0 forLayoutAxis:(int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSupplementaryItem:(id)a0 container:(id)a1 contentSize:(struct CGSize { double x0; double x1; })a2 frameOffset:(struct CGPoint { double x0; double x1; })a3 applyPinning:(BOOL)a4 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 preferredSizes:(id)a6 preferredIndex:(long long)a7 layoutRTL:(BOOL)a8;
- (struct CGSize { double x0; double x1; })_computeContentSizeForEmptyHostContentSizeForContainer:(id)a0 hostContentSize:(struct CGSize { double x0; double x1; })a1 layoutAxis:(int)a2 supplementaryFrames:(id)a3 preferredSizes:(id)a4 layoutRTL:(BOOL)a5 supplementaryKind:(long long)a6;
- (id)_normalizedFramesAlongLayoutAxisForFrames:(id)a0 layoutAxis:(int)a1;
- (struct CGSize { double x0; double x1; })__largestPossibleHostContentSizeForContainerSize:(struct CGSize { double x0; double x1; })a0 layoutAxis:(int)a1;
- (id)_rearrangedFramesForFrames:(id)a0 container:(id)a1 contentSize:(struct CGSize { double x0; double x1; })a2 applyPinning:(BOOL)a3 frameOffset:(struct CGPoint { double x0; double x1; })a4 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 preferredSizes:(id)a6 layoutRTL:(int)a7 supplementaryKind:(long long)a8;
- (void)_updateSupplementaryItemGeometricIndexer;
- (id)visualDecription;
- (id)itemWithAlignment:(long long)a0 identifier:(id)a1;
- (id)initWithAuxillaryHost:(id)a0;
- (void)resolveSupplementaryItemsForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (void)resolve;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1 additionalFrameOffset:(struct CGPoint { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })_requiredContentSizeForSupplementaryFrames:(id)a0 forLayoutAxis:(int)a1 containerSize:(struct CGSize { double x0; double x1; })a2;

@end
