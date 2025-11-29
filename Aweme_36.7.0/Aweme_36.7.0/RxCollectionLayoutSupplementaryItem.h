@class NSString, RxCollectionLayoutAnchor;

@interface RxCollectionLayoutSupplementaryItem : RxCollectionLayoutItem <RxCollectionLayoutAuxillaryItem, NSCopying>

@property (retain, nonatomic) NSString *elementKind;
@property (retain, nonatomic) RxCollectionLayoutAnchor *containerAnchor;
@property (retain, nonatomic) RxCollectionLayoutAnchor *itemAnchor;
@property (nonatomic) long long zIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2 itemAnchor:(id)a3;
+ (id)supplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2;

- (id)item;
- (id)boundarySupplementaryItem;
- (void).cxx_destruct;
- (id)initWithSize:(id)a0 contentInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 elementKind:(id)a2 containerAnchor:(id)a3 itemAnchor:(id)a4 zIndex:(long long)a5;
- (id)decorationItem;
- (id)supplementaryItem;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
