@class RxCollectionLayoutSection, RxCollectionLayoutAuxillaryItemSolver, RxCollectionLayoutSolutionState, UITraitCollection, NSIndexSet, NSString, RxCollectionLayoutSupplementaryRegistrar;
@protocol RxCollectionLayoutContainer, RxCollectionPreferredSizes;

@interface RxCollectionLayoutSectionEstimatedSolver : NSObject <RxCollectionLayoutSectionSolver> {
    BOOL _layoutRTL;
    BOOL _shouldAdjustContentSizeForPartialLastGroupSolution;
    int _layoutAxis;
    RxCollectionLayoutSection *_layoutSection;
    id<RxCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    long long _frameCount;
    struct CGPoint { double x; double y; } _orthogonalOffset;
    struct CGVector { double dx; double dy; } _orthogonalScrollingPrefetchingUnitVector;
}

@property (readonly, nonatomic) id<RxCollectionPreferredSizes> preferredSizes;
@property (retain, nonatomic) RxCollectionLayoutAuxillaryItemSolver *sectionSupplementarySolution;
@property (retain, nonatomic) RxCollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar;
@property (retain, nonatomic) id<RxCollectionLayoutContainer> memoizedSupplementaryHostContainer;
@property (retain, nonatomic) RxCollectionLayoutSolutionState *solutionState;
@property (readonly, nonatomic) int containerLayoutAxis;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } orthogonalScrollingPrefetchingUnitVector;
@property (readonly, nonatomic) RxCollectionLayoutSection *layoutSection;
@property (readonly, nonatomic) id<RxCollectionLayoutContainer> container;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) BOOL layoutRTL;
@property (readonly, nonatomic) int layoutAxis;
@property (readonly, nonatomic) long long frameCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveContentFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (readonly, nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } orthogonalOffset;
@property (readonly, nonatomic) id<RxCollectionLayoutContainer> __sectionContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)__solveWithParameters:(id)a0;
- (id)__indexesOfBookmarksAffectedByResolveItems:(id)a0;
- (void)__updateSolutionAuxillaryRangeIndexerKindDict:(id)a0 fromBookmark:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bookmarks:(id)a1;
- (void)__configureInitialOrthogonalPrefetchingUnitVector;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(int)a2 frameCount:(long long)a3 preferredSizes:(id)a4 layoutRTL:(BOOL)a5;
- (struct CGSize { double x0; double x1; })auxillaryHostPinningContentSize;
- (double)__dimensionForRootGroupAlongAxis:(int)a0;
- (id)allSupplementaryKeys;
- (id)supplementaryKeysAssociatedWithItemAtIndex:(long long)a0;
- (id)auxillaryHostContainer;
- (id)auxillaryHostAuxillaryItems;
- (void).cxx_destruct;
- (id)frameForIndex:(long long)a0;
- (id)visualDescription;
- (id)auxillaryHostSupplementaryEnroller;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)initWithLayoutSection:(id)a0;
- (int)auxillaryHostLayoutAxis;
- (id)resolveWithParameters:(id)a0 preferredSizes:(id)a1;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(int)a2 frameCount:(long long)a3;
- (id)sectionSupplementaryFrameForIndex:(long long)a0;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShouldAdjustContentSizeForPartialLastGroupSolution:(BOOL)a0;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (id)auxillaryHostPreferredSizes;
- (void)setOrthogonalOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(int)a2 frameCount:(long long)a3 preferredSizes:(id)a4;
- (long long)auxillaryHostAuxillaryKind;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)a0;
- (id)sectionSupplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;

@end
