@class AWEEcomSearchSidebar, AWEMerchandiseComponentCell, AWEMerchandiseSortFilterView, AWEEcommerceSearchAddressCell;

@interface AWEEcomSearchMerchandiseNativeCardListController : AWEEcomSearchMerchandiseCardListController <AWEEcomSearchListFilterCardProtocol, AWEEcomSearchListInstantCardProtocol>

@property (retain, nonatomic) AWEMerchandiseComponentCell *componentCell;
@property (retain, nonatomic) AWEMerchandiseSortFilterView *sortFilterView;
@property (retain, nonatomic) AWEEcomSearchSidebar *filterSidebar;
@property (nonatomic) double addressHeight;
@property (retain, nonatomic) AWEEcommerceSearchAddressCell *addressView;

- (id)filterManager;
- (void)registerCollectionViewCell:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 sizeForItemAtIndexPath:(id)a1 withModel:(id)a2;
- (id)identifierForModel:(id)a0;
- (void)configCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (id)eCardTacker;
- (void)sendRefreshRequestWithSearchQueryParmas:(id)a0;
- (void)afterLayoutFirstPageRealDataWithContext:(id)a0;
- (void)jumpToUserWindowLiveRoomWithModel:(id)a0 logExtraDict:(id)a1;
- (id)preprocessSortFilterModel:(id)a0;
- (id)entranceInfoJSONString;
- (id)keywordList;
- (Class)classForModelType:(long long)a0;
- (void)didSelectWord:(id)a0;
- (id)identifierForModel:(id)a0 version:(long long)a1;
- (Class)getSingleColClassWithModelType:(long long)a0;
- (Class)getDoubleColClassWithModelType:(long long)a0;
- (Class)classForModelVersion:(long long)a0 model:(id)a1;
- (Class)cellClassForModel:(id)a0 version:(long long)a1;
- (BOOL)isInstantTab;
- (void)_configCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (Class)generalTopUserAdCellClass;
- (id)getSearchWordProtocol;
- (void)updateFilterSidebarWithModel:(id)a0;
- (struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })filterCellViewConfigWithModel:(id)a0;
- (void)merchandisShowTrack:(id)a0;
- (void)configMerchandiseCardWithCell:(id)a0 enterFrom:(id)a1;
- (void)removeFilterSidebar;
- (void)createFilterSidebarWithModel:(id)a0;
- (id)sidebarComponentWithModel:(id)a0;
- (id)clearChildrenComponentDisplayFlagWithModel:(id)a0;
- (void)jumpToUserWindowLiveRoomWithModel:(id)a0 player:(id)a1 playerView:(id)a2 logExtraDict:(id)a3;
- (id)componentCellTrackParamsWithModel:(id)a0;
- (void)textTagCell:(id)a0 didClickClearWithModel:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)columnType;
- (id)srp;

@end
