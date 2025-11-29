@class IESLiveEmptyView, IESLiveCommonKTVOrderPanelModel, NSArray, IESLiveMultiKTVWillSingFloatingView, IESLiveMultiKTVWillSingCell, NSString, UITableView, NSMutableArray, IESLiveKTVWillSingListWatingConnectView, PlaylistTab;

@interface IESLiveKTVOrderPanelWillSingListCell : UICollectionViewCell <UITableViewDataSource, UITableViewDelegate, IESLiveKTVOrderPanelListProtocol>

@property (copy, nonatomic) NSArray *willSingMusicList;
@property (weak, nonatomic) IESLiveCommonKTVOrderPanelModel *panelModel;
@property (retain, nonatomic) PlaylistTab *category;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveMultiKTVWillSingFloatingView *floatingView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) IESLiveKTVWillSingListWatingConnectView *watingConnectView;
@property (retain, nonatomic) IESLiveKTVWillSingListWatingConnectView *footerView;
@property (weak, nonatomic) IESLiveMultiKTVWillSingCell *currentPlayingCell;
@property (retain, nonatomic) NSMutableArray *willShowCellArray;
@property (nonatomic) BOOL isCPUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithSectionModel:(id)a0 index:(long long)a1;
- (void)refreshOrderList;
- (id)createEmptyView:(long long)a0;
- (long long)sectionTypeWithIndex:(long long)a0;
- (BOOL)shouldShowOfflineSectionHeader:(long long)a0;
- (void)changeOfflineSectionHeaderText;
- (BOOL)shouldShowBottomHeader:(long long)a0;
- (id)willSingMusicListSectionArray;
- (BOOL)isSelfOrderSongWithMusicModel:(id)a0;
- (void)p_renderBottomEmptyCell:(id)a0;
- (BOOL)shouldShowBottomClearCell;
- (void)reloadData;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)addObserver;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupView;
- (void)willDisplay;

@end
