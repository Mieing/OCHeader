@class AWEListDataController, NSString, AWEMixVideoModel, AWEUILoadingView, NSNumber, UITableView;
@protocol AWEMixVideoPanelListViewDelegate, AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWERelatedVideoMixVideoPanelListView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (nonatomic) BOOL firstShow;
@property (nonatomic) double originalScrollViewOffset;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL isPreloadData;
@property (nonatomic) BOOL isupScroll;
@property (nonatomic) BOOL isEnableSelectRefresh;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *subDataController;
@property (weak, nonatomic) id<AWEMixVideoPanelListViewDelegate> delegate;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSNumber *fromOrder;
@property (nonatomic) BOOL forceFirstPosition;
@property (nonatomic) BOOL fromDetailList;
@property (nonatomic) BOOL useExternalDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToLocatedCell;
- (void)addLoadMoreIfNeeded;
- (void)scrollToLocatedCellAnimated:(BOOL)a0;
- (void)scrollToLocatedCellAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)slientReloadDataAtIndex:(long long)a0;
- (void)setSelectedRefreshEnable:(BOOL)a0;
- (void)preloadDataDidScroll:(id)a0;
- (BOOL)isNotNeedInitRequest;
- (void)addRequestUpIfNeeded;
- (void)requestUp:(id /* block */)a0;
- (void)loadmore:(id /* block */)a0;
- (void)updateMixInfo:(id)a0 currentAwemeModel:(id)a1 dataController:(id)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
