@class UITableView, NSString, PlaylistTab, IESLiveEmptyView, NSMutableArray, IESLiveCommonKTVOrderPanelModel;

@interface IESLiveKTVOrderPanelMyApplyListCell : UICollectionViewCell <UITableViewDataSource, UITableViewDelegate, IESLiveKTVOrderPanelListProtocol>

@property (retain, nonatomic) IESLiveCommonKTVOrderPanelModel *panelModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) PlaylistTab *category;
@property (retain, nonatomic) NSMutableArray *applyMusicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithSectionModel:(id)a0 index:(long long)a1;
- (void)removeItemWithMusicID:(long long)a0 orderUserID:(id)a1;
- (void)needUpdateList;
- (void)fetchWantList;
- (void)reloadData;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)addObserver;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupView;
- (void)willDisplay;

@end
