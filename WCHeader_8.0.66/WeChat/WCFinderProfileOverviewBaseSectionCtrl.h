@class UIViewController, WCFinderStreamProfileHeadData, UICollectionView, WCFinderProfileOverviewHeader, WCFinderProfileOverviewPageModel, WCFinderProfileOverviewSection;
@protocol WCFinderProfileOverviewBaseSectionDelegate;

@interface WCFinderProfileOverviewBaseSectionCtrl : NSObject

@property (weak, nonatomic) WCFinderProfileOverviewHeader *headerView;
@property (retain, nonatomic) WCFinderProfileOverviewSection *model;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) WCFinderStreamProfileHeadData *contactViewModel;
@property (weak, nonatomic) WCFinderProfileOverviewPageModel *pageModel;
@property (weak, nonatomic) id<WCFinderProfileOverviewBaseSectionDelegate> delegate;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) double contentMargin;

+ (id)sectionDefines;
+ (id)suppportAllSections;
+ (BOOL)featureSupport:(id)a0;
+ (void)setupRegister:(id)a0;

- (void)relayout;
- (void)reloadData;
- (void)reloadSectionCtrl;
- (void)reloadSection:(id)a0;
- (void)reloadItem:(id)a0 section:(id)a1;
- (void)reloadItems:(id)a0;
- (id)cellForIdentifier:(id)a0 forSection:(id)a1;
- (void)reloadStateView;
- (id)visitableCellIdentifiers;
- (void)scrollToCell:(id)a0 item:(id)a1;
- (void)_onOVOSectionDataChanged:(id)a0;
- (void)onSectionDataChanged:(id)a0;
- (id)customBottomMoreBtnWording;
- (id)sections;
- (struct SectionItems { id /* block */ x0; id x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })itemsForSection:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })itemSizeForItem:(id)a0 collectionView:(id)a1;
- (id)cellForItemIdentifier:(id)a0 collectionView:(id)a1;
- (id)supplementaryViewForSection:(id)a0 elementKind:(id)a1 collectionView:(id)a2;
- (double)minimumInteritemSpacingForIdentifier:(id)a0 section:(long long)a1;
- (double)minimumLineSpacingForIdentifier:(id)a0 section:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForSectionAtIndex:(long long)a0 identifier:(id)a1;
- (void)onSelectedCellForIdentifier:(id)a0;
- (void)onClickHeaderRightBtn:(id)a0;
- (void)onClickBottomMore;
- (void)willDisplayItemIdentifier:(id)a0;
- (void)didEndDisplayItemIdentifier:(id)a0;
- (long long)seperatorStyleForSection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetForSeperator:(id)a0 position:(long long)a1;
- (double)fullHorizontalInset;
- (double)adjustHorizontalInset;
- (double)adjustHorizontalSize;
- (BOOL)alreadyDisplayJsutWatch;
- (void)jumpToRefTab;
- (void)jumpToRefTab:(id /* block */)a0;
- (void)reloadStatusView;
- (id)overviewPage;
- (void)pageWillAppear;
- (void)pageDidDisappear;
- (void)pageDidAppear;
- (void)onPageSizeDidChanged;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onItemExpose:(id)a0 exposeObj:(id *)a1;
- (void)onItemUnExpose:(id)a0 exposeObj:(id *)a1;
- (void)onHeaderWillDisplay:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveMorphDismissRectWithCustomKey:(id)a0;
- (void).cxx_destruct;

@end
