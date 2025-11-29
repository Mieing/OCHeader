@class NSArray, NSDictionary, NSMutableIndexSet, RxCollectionLayoutGroup, NSIndexSet;
@protocol RxCollectionLayoutSectionCallbackable;

@interface RxCollectionLayoutSection : NSObject <NSCopying>

@property (retain, nonatomic) id<RxCollectionLayoutSectionCallbackable> callback;
@property (copy, nonatomic) RxCollectionLayoutGroup *group;
@property (copy, nonatomic) NSDictionary *decorationItemsDict;
@property (copy, nonatomic) NSDictionary *supplementaryItemsDict;
@property (retain, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSMutableIndexSet *pinnedBoundarySupplementaryItemIndexes;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) BOOL scrollsOrthogonally;
@property (nonatomic) BOOL hasBackgroundDecorationItem;
@property (readonly, nonatomic) BOOL hasVisibleItemsHandler;
@property (nonatomic) BOOL prefersListSolver;
@property (nonatomic) BOOL isEmptySection;
@property (nonatomic) struct RxDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) BOOL supplementariesFollowContentInsets;
@property (copy, nonatomic) id /* block */ visibleItemsInvalidationHandler;
@property (copy, nonatomic) NSArray *decorationItems;

+ (id)__emptySection;
+ (id)sectionWithGroup:(id)a0;

- (id)__auxillaryItemForElementKind:(id)a0 category:(unsigned long long)a1;
- (BOOL)__containsEstimatedSizeElement;
- (BOOL)__isListSolverCompatibleForLayoutAxis:(int)a0;
- (id)initWithGroup:(id)a0 contentInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 supplementaryItems:(id)a2 boundarySupplementartItems:(id)a3 pinnedSupplementaryItemIndexes:(id)a4 interGroupSpacing:(double)a5 visibleItemsInvalidationHandler:(id /* block */)a6 supplementariesFollowInsets:(BOOL)a7 decorationItems:(id)a8 orthogonalScrollingBehavior:(long long)a9 isEmptySection:(BOOL)a10 prefersListSolver:(BOOL)a11;
- (BOOL)__containsBackgroundDecorationItem:(id)a0;
- (void)__checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLayoutGroup:(id)a0;

@end
