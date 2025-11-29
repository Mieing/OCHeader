@class NSArray, RxCollectionLayoutSpacing;

@interface RxCollectionLayoutGroup : RxCollectionLayoutItem <NSCopying>

@property (copy, nonatomic) NSArray *subitems;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long count;
@property (copy, nonatomic) id /* block */ customGroupItemProvider;
@property (copy, nonatomic) id /* block */ itemsProvider;
@property (readonly, nonatomic) BOOL hasItemsProvider;
@property (nonatomic) int layoutAxis;
@property (nonatomic) long long groupOptions;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) RxCollectionLayoutSpacing *interItemSpacing;

+ (id)horizontalGroupWithLayoutSize:(id)a0 repeatingSubitem:(id)a1 count:(long long)a2;
+ (id)verticalGroupWithLayoutSize:(id)a0 subitem:(id)a1 count:(long long)a2;
+ (id)horizontalGroupWithLayoutSize:(id)a0 subitem:(id)a1 count:(long long)a2;
+ (id)_effectiveSizeForSize:(id)a0 count:(long long)a1 layoutDirection:(int)a2;
+ (id)customGroupWithLayoutSize:(id)a0 itemProvider:(id /* block */)a1;
+ (id)_effectiveCopiedSubitemsForSubitems:(id)a0 count:(long long)a1 layoutDirection:(int)a2;
+ (id)verticalGroupWithLayoutSize:(id)a0 repeatingSubitem:(id)a1 count:(long long)a2;
+ (id)horizontalGroupWithLayoutSize:(id)a0 subitems:(id)a1;
+ (id)verticalGroupWithLayoutSize:(id)a0 subitems:(id)a1;

- (id)initWithSize:(id)a0 subitems:(id)a1 count:(long long)a2 interItemSpacing:(id)a3 contentInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a4 layoutAxis:(int)a5 edgeSpacing:(id)a6 supplementaryItems:(id)a7 itemsProvider:(id /* block */)a8 customGroupItemProvider:(id /* block */)a9 name:(id)a10 identifier:(id)a11;
- (BOOL)__isListSolverCompatibleForLayoutAxis:(int)a0;
- (struct CGSize { double x0; double x1; })insetSizeForContainer:(id)a0;
- (void).cxx_destruct;
- (id)visualDescription;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)description;
- (BOOL)isCustomGroup;
- (BOOL)isVerticalGroup;
- (BOOL)isHorizontalGroup;
- (BOOL)isGroup;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
