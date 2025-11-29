@class UICollectionReusableView;
@protocol AWESearchDoubleColumnReusableHeaderViewProtocol;

@interface AWEEcomSearchMerchandiseGuideSearchListController : AWEEcomSearchListBaseController

@property (retain, nonatomic) UICollectionReusableView<AWESearchDoubleColumnReusableHeaderViewProtocol> *headerView;

- (double)collectionView:(id)a0 layout:(id)a1 heightForHeaderInSection:(long long)a2;
- (void)registerCollectionViewCell:(id)a0;
- (void)clearGuideSearchWord;
- (void)headerViewShouldUpdateTheme:(unsigned long long)a0;
- (id)keywordList;
- (void)didSelectWord:(id)a0;
- (unsigned long long)aweui_viewControllerState;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;

@end
