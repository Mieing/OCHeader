@class EmoticonStoreFootView, NSString, NSMutableArray, MMTableView;

@interface MMStoreEmotionChartsViewController : MMUIViewController <EmoticonStoreMgrExt, UITableViewDataSource, UITableViewDelegate, MMEmotionChartsCellDelegate, MMRefreshTableFooterDelegate> {
    MMTableView *_chartsTableView;
    NSMutableArray *_chartsItemArray;
    BOOL _isLoadedFromCache;
    unsigned long long _sessionId;
    EmoticonStoreFootView *_tailView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupData;
- (void)setupViews;
- (void)setupTableView;
- (void)initTableFooterView;
- (void)reloadData;
- (void)reportEmoticonStoreExposure;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)OnStoreListChanged:(id)a0 withRet:(unsigned long long)a1 withReqType:(unsigned int)a2 data:(id)a3;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)OnEmotionChartsCellTapButton:(id)a0;
- (void).cxx_destruct;

@end
