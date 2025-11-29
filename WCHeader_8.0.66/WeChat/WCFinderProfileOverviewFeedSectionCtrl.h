@class NSString, NSMutableSet;

@interface WCFinderProfileOverviewFeedSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl

@property (retain, nonatomic) NSMutableSet *deleteFeedIds;
@property (retain, nonatomic) NSString *showPostTimeTid;

+ (id)sectionDefines;
+ (void)setupRegister:(id)a0;
+ (id)feedInfosInDataItem:(id)a0 layout:(id)a1 atIndexPath:(id)a2;

- (id)displayTids;
- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (void)onSelectedCellForIdentifier:(id)a0;
- (double)minimumLineSpacingForIdentifier:(id)a0 section:(long long)a1;
- (double)minimumInteritemSpacingForIdentifier:(id)a0 section:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForSectionAtIndex:(long long)a0 identifier:(id)a1;
- (long long)displayMaxItemCount;
- (void)willDisplayItemIdentifier:(id)a0;
- (void)onItemExpose:(id)a0 exposeObj:(id *)a1;
- (void)onItemUnExpose:(id)a0 exposeObj:(id *)a1;
- (id)genFeedReportDictWithIndexPath:(id)a0 dataItem:(id)a1;
- (id)genSession3ReportDict;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveMorphDismissRectWithCustomKey:(id)a0;
- (BOOL)showJustWatchWithContentVM:(id)a0;
- (void).cxx_destruct;

@end
