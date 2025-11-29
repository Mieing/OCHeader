@class NSString;

@interface WCFInderProfileOverviewPlaybackSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl <WCFinderZoomAnimatorBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionDefines;
+ (void)setupRegister:(id)a0;
+ (id)feedInfosInDataItem:(id)a0 layout:(id)a1 atIndexPath:(id)a2;

- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (long long)displayRowCount;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (double)minimumInteritemSpacingForIdentifier:(id)a0 section:(long long)a1;
- (double)minimumLineSpacingForIdentifier:(id)a0 section:(long long)a1;
- (void)onSelectedCellForIdentifier:(id)a0;
- (void)willDisplayItemIdentifier:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForSectionAtIndex:(long long)a0 identifier:(id)a1;
- (void)onItemExpose:(id)a0 exposeObj:(id *)a1;
- (void)onItemUnExpose:(id)a0 exposeObj:(id *)a1;
- (void)reportFeedStreamClickSelectedIndexPath:(id)a0;
- (id)zoomAnimatorTransitionSnapView:(id)a0 cornerRaidus:(double *)a1;

@end
