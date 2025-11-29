@interface WCFinderProfileOverviewMusicSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl

+ (id)sectionDefines;
+ (void)setupRegister:(id)a0;

- (id)data;
- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (id)layoutForSectionIdentifier:(id)a0;
- (int)layoutTypeForSection:(id)a0;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForSectionAtIndex:(long long)a0 identifier:(id)a1;
- (void)onSelectedCellForIdentifier:(id)a0;
- (double)minimumLineSpacingForIdentifier:(id)a0 section:(long long)a1;
- (long long)seperatorStyleForSection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetForSeperator:(id)a0 position:(long long)a1;
- (long long)columnCountForLayoutType:(int)a0;
- (BOOL)showMediaCount;
- (BOOL)showBottomJumpTabButton;
- (BOOL)onlyMusicSection;
- (void)onClickHeaderRightBtn:(id)a0;
- (void)openPlaylist;

@end
