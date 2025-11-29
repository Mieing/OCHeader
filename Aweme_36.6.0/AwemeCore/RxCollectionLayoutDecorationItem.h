@class NSString, RxCollectionLayoutAnchor;

@interface RxCollectionLayoutDecorationItem : RxCollectionLayoutItem <RxCollectionLayoutAuxillaryItem, NSCopying>

@property (retain, nonatomic) NSString *elementKind;
@property (retain, nonatomic, setter=_setRegistrationViewClass:) Class _registrationViewClass;
@property (readonly, nonatomic) BOOL isBackgroundDecoration;
@property (retain, nonatomic) RxCollectionLayoutAnchor *containerAnchor;
@property (retain, nonatomic) RxCollectionLayoutAnchor *itemAnchor;
@property (nonatomic) long long zIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundDecorationItemWithElementKind:(id)a0;

- (id)item;
- (id)boundarySupplementaryItem;
- (void).cxx_destruct;
- (id)decorationItem;
- (id)initWithElementKind:(id)a0 size:(id)a1 contentInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 containerAnchor:(id)a3 itemAnchor:(id)a4 zIndex:(long long)a5 registrationViewClass:(Class)a6 isBackgroundDecoration:(BOOL)a7;
- (id)supplementaryItem;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
