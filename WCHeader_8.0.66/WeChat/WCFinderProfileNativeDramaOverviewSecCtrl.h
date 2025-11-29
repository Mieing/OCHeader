@interface WCFinderProfileNativeDramaOverviewSecCtrl : WCFinderProfileOverviewBaseSectionCtrl

+ (id)sectionDefines;
+ (void)setupRegister:(id)a0;

- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (void)onSelectedCellForIdentifier:(id)a0;

@end
