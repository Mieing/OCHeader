@class UITableView, NSString, AWEAwemeModel, AWEUILoadingView, AWEListDataController;
@protocol AWERelatedRecomendPanelListViewDelegate;

@interface AWERelatedRecomendPanelListView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) BOOL firstShow;
@property (retain, nonatomic) AWEAwemeModel *selectedModel;
@property (copy, nonatomic) id /* block */ dataSourceHandler;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AWERelatedRecomendPanelListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadmore;
- (void)scrollToLocatedCell;
- (void)updateSelectedModel:(id)a0;
- (void)updateSelectedModel:(id)a0 dataController:(id)a1;
- (void)scrollToLocatedCellAnimated:(BOOL)a0;
- (void)didDataSourceUpdatedWithDataArray:(id)a0;
- (void)addLoadMore;
- (void)reloadDataAndLocateToCurrentPosition;
- (void)scrollToLocatedCellAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)slientReloadDataAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)dealloc;

@end
