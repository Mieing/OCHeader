@class NSMutableDictionary;

@interface WCFinderProfileStoreOverviewSecCtrl : WCFinderProfileOverviewBaseSectionCtrl

@property (retain, nonatomic) NSMutableDictionary *vmMap;

+ (id)sectionDefines;
+ (void)setupRegister:(id)a0;

- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (void)calcuteCellSize;
- (long long)displayMaxCount;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (void)onSelectedCellForIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (double)minimumInteritemSpacingForIdentifier:(id)a0 section:(long long)a1;
- (void).cxx_destruct;

@end
