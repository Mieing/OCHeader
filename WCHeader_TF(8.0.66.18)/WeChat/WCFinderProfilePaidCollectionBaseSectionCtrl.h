@interface WCFinderProfilePaidCollectionBaseSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl

+ (long long)defaultDisplayRowCount;
+ (void)setupRegister:(id)a0;

- (long long)displayRowCount;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (long long)seperatorStyleForSection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetForSeperator:(id)a0 position:(long long)a1;
- (void)onSelectedCellForIdentifier:(id)a0;
- (void)onItemExpose:(id)a0 exposeObj:(id *)a1;

@end
