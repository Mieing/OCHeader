@class AWEMusicDraggableTableView, UIView, NSArray, NSString, AWEMusicPlaylistBatchManageEventUtil, UIButton, AWECreatePlaylistViewModel, AWEMusicExceptionalView, UILabel;

@interface AWEMusicPlaylistOfflineBatchManageViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWECreatePlaylistViewModel *viewModel;
@property (retain, nonatomic) AWEMusicPlaylistBatchManageEventUtil *eventUtil;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) AWEMusicDraggableTableView *tableView;
@property (retain, nonatomic) AWEMusicExceptionalView *emptyView;
@property (retain, nonatomic) UIView *navigationBar;
@property (nonatomic) long long selectCount;
@property (retain, nonatomic) UIView *footerContentView;
@property (retain, nonatomic) NSArray *selectedMusicModels;
@property (retain, nonatomic) NSArray *cellModels;
@property (nonatomic) BOOL isAllSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_dismiss;
- (id)initWithCreateViewModel:(id)a0;
- (void)didClickSelectAll:(id)a0;
- (void)didClickComplete;
- (void)didClickDelete;
- (void)p_deleteSelected;
- (void)p_updateCellCheckStatus:(id)a0;
- (void)showEmptyView:(id)a0;
- (void)p_updateSelectAllWithStatus:(BOOL)a0;
- (void)p_refreshAll;
- (void)p_refreshViewBySelectedCount;
- (void)p_checkCountIfEmpty;
- (void)p_selectedSongAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)setupUI;

@end
