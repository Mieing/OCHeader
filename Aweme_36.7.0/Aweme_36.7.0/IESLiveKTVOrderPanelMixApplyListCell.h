@class UITableView, PlaylistTab, NSString, IESLiveEmptyView, NSMutableArray, IESLiveCommonKTVOrderPanelModel;

@interface IESLiveKTVOrderPanelMixApplyListCell : UICollectionViewCell <UITableViewDataSource, UITableViewDelegate, IESLiveKTVOrderPanelListProtocol>

@property (retain, nonatomic) IESLiveCommonKTVOrderPanelModel *panelModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) PlaylistTab *category;
@property (retain, nonatomic) NSMutableArray *applyArray;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) long long applyCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMultiChorusApply;
- (void)renderWithSectionModel:(id)a0 index:(long long)a1;
- (void)fetchApplyList;
- (void)updateApplyData;
- (void)tr_applyMsgShowWithUser:(id)a0;
- (id)createEmptyViewConfigWithType:(long long)a0;
- (void)reloadData;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupSubviews;
- (void)willDisplay;

@end
