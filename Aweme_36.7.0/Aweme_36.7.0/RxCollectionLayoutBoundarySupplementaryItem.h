@interface RxCollectionLayoutBoundarySupplementaryItem : RxCollectionLayoutSupplementaryItem <NSCopying>

@property (nonatomic) long long alignment;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) BOOL extendsBoundary;
@property (nonatomic) BOOL pinToVisibleBounds;

+ (id)boundarySupplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2 absoluteOffset:(struct CGPoint { double x0; double x1; })a3;
+ (id)boundarySupplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2;

- (id)initWithLayoutSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2 absoluteOffset:(struct CGPoint { double x0; double x1; })a3;
- (id)initWithSize:(id)a0 contentInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 elementKind:(id)a2 containerAnchor:(id)a3 itemAnchor:(id)a4 zIndex:(long long)a5 alignment:(long long)a6 offset:(struct CGPoint { double x0; double x1; })a7 extendsBoundary:(BOOL)a8 pinToVisibleBounds:(BOOL)a9;
- (id)copyWithContainerAnchor:(id)a0 itemAnchor:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
