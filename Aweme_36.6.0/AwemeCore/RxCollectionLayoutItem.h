@class NSArray, NSString, NSUUID, RxCollectionLayoutEdgeSpacing, RxCollectionLayoutSize;

@interface RxCollectionLayoutItem : NSObject <NSCopying> {
    BOOL _containsEstimatedSizeItem;
    BOOL _hasDecorationItemRequiringRegistration;
}

@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) RxCollectionLayoutSize *size;
@property (copy, nonatomic) NSArray *decorationItems;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) BOOL hasComputedContainsEstimatedItem;
@property (nonatomic) BOOL hasCheckedIfDecorationItemRequiresRegistration;
@property (readonly, nonatomic) BOOL containsEstimatedSizeItem;
@property (readonly, nonatomic) BOOL hasDecorationItemRequiringRegistration;
@property (readonly, nonatomic) BOOL hasCustomGroupItemProvider;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, nonatomic) BOOL isDecoration;
@property (readonly, nonatomic) BOOL isAuxillary;
@property (readonly, nonatomic) BOOL isSupplementary;
@property (readonly, nonatomic) BOOL isCustomGroup;
@property (readonly, nonatomic) BOOL ignoreRTL;
@property (readonly, copy, nonatomic) NSArray *auxillaryItems;
@property (nonatomic) struct RxDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (copy, nonatomic) RxCollectionLayoutEdgeSpacing *edgeSpacing;
@property (readonly, copy, nonatomic) RxCollectionLayoutSize *layoutSize;

+ (id)itemWithLayoutSize:(id)a0 supplementaryItems:(id)a1;
+ (id)itemWithLayoutSize:(id)a0;
+ (id)itemWithSize:(id)a0 decorationItems:(id)a1;

- (void)enumerateItemsWithHandler:(id /* block */)a0;
- (id)initWithLayoutSize:(id)a0 supplementaryItems:(id)a1;
- (struct CGSize { double x0; double x1; })insetSizeForContainer:(id)a0;
- (void)enumerateSupplementaryItemsWithHandler:(id /* block */)a0;
- (id)containerForParentContainer:(id)a0;
- (void).cxx_destruct;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)description;
- (struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveContentInsets;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(id)a0 contentInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 edgeSpacing:(id)a2 supplementaryItems:(id)a3 decorationItems:(id)a4 name:(id)a5 identifier:(id)a6;
- (id)_visualDescription;

@end
