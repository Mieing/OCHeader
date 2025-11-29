@class IESECListKitStickHeaderView;

@interface IESECListKitBFFSectionController : IESECListKitBaseListSectionController

@property (retain, nonatomic) IESECListKitStickHeaderView *headerView;

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)sectionWillDisplaySupplementaryView:(id)a0;
- (void)sectionDidEndDisplayingSupplementaryView:(id)a0;
- (id)visibleCellModels;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)appWillEnterForground:(id)a0;
- (BOOL)shouldStickHeader;
- (void)setItemRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 atIndex:(long long)a2 updateRectBlock:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCustomItemRectAtIndex:(long long)a0 withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (long long)spanSizeFor:(long long)a0;
- (void)sendVisibleEventsForAllVisibleCells:(BOOL)a0 source:(unsigned long long)a1;
- (void)sendNativeCardAppearanceEventsToDelegeate:(BOOL)a0 cellModel:(id)a1 source:(unsigned long long)a2 index:(long long)a3;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)separatorColor;
- (id)init;
- (double)separatorHeight;
- (void)appDidEnterBackground:(id)a0;
- (id)sectionBackgroundColor;
- (void)dealloc;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (BOOL)viewAppeared;
- (struct IESECListKitSeparatorInsets { double x0; double x1; })separatorInsets;
- (Class)headerViewClass;

@end
