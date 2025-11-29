@class AWEMusicPlaylistBatchManageViewModel, AWEMusicDraggableTableView, UIView, NSArray, NSString, UIButton, AWEMusicPlaylistBatchManageEventUtil, AWEPlaylistDataController, AWEUILoadingView, AWEMusicDSPEventModel, AWEMusicExceptionalView, UILabel;

@interface AWEMusicPlaylistBatchManageViewController : AWEMiniLunaBaseViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicPlaylistBatchManageViewModelDelegate, AWEMusicPlaylistSelectedViewControllerDelegate, AWEMusicExceptionalViewDelegate, AWEMusicPresentPushInnerProvider>

@property (retain, nonatomic) AWEPlaylistDataController *dataController;
@property (retain, nonatomic) AWEMusicPlaylistBatchManageViewModel *viewModel;
@property (retain, nonatomic) AWEMusicPlaylistBatchManageEventUtil *eventUtil;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) AWEMusicDraggableTableView *tableView;
@property (retain, nonatomic) AWEMusicExceptionalView *noNetView;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) long long selectCount;
@property (retain, nonatomic) UIView *footerContentView;
@property (nonatomic) BOOL isCellRemoving;
@property (nonatomic) double loadStartTime;
@property (retain, nonatomic) NSArray *selectedMusicModels;
@property (nonatomic) BOOL showAddToOtherPlaylist;
@property (nonatomic) BOOL isMiniLuna;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_dismiss;
- (void)noNetViewDidTapTryAgain:(id)a0;
- (void)dismissNoNetView;
- (void)didClickSelectAll:(id)a0;
- (void)didClickComplete;
- (void)p_loadAllWithTrialCount:(long long)a0;
- (void)showNoNetView:(id)a0;
- (void)didClickAdd;
- (void)didClickDelete;
- (void)p_reorderPlaylistWithMusics:(id)a0 isRetry:(BOOL)a1;
- (void)p_deleteSelected;
- (void)reportGroupCancelCollectWithOriginalMusicModels:(id)a0 deleted:(id)a1;
- (void)p_updateCellCheckStatus:(id)a0;
- (void)selectCountDidChangeTo:(long long)a0 isAllSelected:(BOOL)a1;
- (void)manageSongListChanged;
- (void)playlistSelectedController:(id)a0 didAddToItem:(id)a1;
- (void)playlistSelectedControllerDidFailToAdd:(id)a0;
- (id)initWithDataController:(id)a0 showAddToOtherPlaylist:(BOOL)a1 isMiniLuna:(BOOL)a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)setupUI;

@end
