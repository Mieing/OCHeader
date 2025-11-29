@class AWEDetailFeedPageTempInfoData, AWEDetailCellConfigStrategyFactory, AWEAwemeDetailCellManager, AWEDetailFeedPageInfoData;

@interface AWEDetailFeedCellContainer : AWEArchContainer

@property (retain, nonatomic) AWEDetailFeedPageInfoData *pageInfo;
@property (retain, nonatomic) AWEDetailFeedPageTempInfoData *tmp_pageInfo;
@property (retain, nonatomic) AWEAwemeDetailCellManager *cellManager;
@property (retain, nonatomic) AWEDetailCellConfigStrategyFactory *strategyFactory;

- (void)setupContainer;
- (id)cellReuseIdentifierForRowWithModel:(id)a0;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1;
- (id)createDrawBackCellForIndexPath:(id)a0 tableView:(id)a1 withModel:(id)a2;
- (id)getPreloadedCellForIndexPath:(id)a0 tableView:(id)a1 withModel:(id)a2;
- (id)createNormalCellForIndexPath:(id)a0 tableView:(id)a1 withModel:(id)a2;
- (id)createCellContextWithModel:(id)a0 atIndexPath:(id)a1 withCell:(id)a2;
- (id)creatCellForRowAtIndexPath:(id)a0 tableView:(id)a1 withModel:(id)a2;
- (void).cxx_destruct;

@end
