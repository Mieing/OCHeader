@class NSNumber, NSMutableArray, UIView;

@interface AWEEcomSearchMerchandiseLynxCardListController : AWEEcomSearchMerchandiseCardListController

@property (retain, nonatomic) UIView *hideTopCornerWhiteView;
@property (retain, nonatomic) NSMutableArray *lynxCardUpdateHeightArray;
@property (retain, nonatomic) NSMutableArray *lynxCardUpdateHeightIndexPathArray;
@property (retain, nonatomic) NSNumber *sortFilterShowIndex;

- (void)registerCollectionViewCell:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 sizeForItemAtIndexPath:(id)a1 withModel:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 xOffsetForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 yOffsetForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 layout:(id)a1 stickyForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 originYForItemAtIndexPath:(id)a2;
- (id)identifierForModel:(id)a0;
- (void)configCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (id)eCardTacker;
- (void)sendRefreshRequestWithSearchQueryParmas:(id)a0;
- (void)managerSearchKeywordCallBack;
- (void)scrollToDisplayItemWithOffset:(double)a0 index:(long long)a1 animated:(BOOL)a2;
- (void)jumpToVideoDetailTableView:(long long)a0 model:(id)a1 params:(id)a2;
- (void)updateHeightForCell:(long long)a0 model:(id)a1;
- (void)updateHeightForCellWithIndexPath:(id)a0 model:(id)a1;
- (void)updateHeightForCommonCell:(long long)a0 model:(id)a1;
- (void)updateHeightForCommonCellWithIndexPath:(id)a0 model:(id)a1;
- (id)componentCell;
- (void)updateLayoutAndCanBeCanceled;
- (id)sortFilterView;
- (Class)classForModelType:(long long)a0;
- (long long)awemeOffsetWithAwemeIndex:(long long)a0 withIdList:(id)a1;
- (id)identifierForModel:(id)a0 version:(long long)a1;
- (Class)getSingleColClassWithModelType:(long long)a0;
- (Class)getDoubleColClassWithModelType:(long long)a0;
- (Class)classForModelVersion:(long long)a0 model:(id)a1;
- (Class)cellClassForModel:(id)a0 version:(long long)a1;
- (BOOL)isInstantTab;
- (void)_configCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (double)feedLynxCardWidth:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)columnType;

@end
