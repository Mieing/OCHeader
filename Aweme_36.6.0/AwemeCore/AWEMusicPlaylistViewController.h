@class AWEMusicPlayEventService, NSString, AWEMusicDSPEventModel, AWEMusicExceptionalView, AWEMusicPlaylistViewControllerViewModel, AWEMusicPlaylistHeaderView, UITableView;
@protocol MusicService;

@interface AWEMusicPlaylistViewController : AWEMiniLunaBaseViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicPlaylistViewControllerViewModelDelegate, AWEMusicExceptionalViewDelegate, AWEMusicPlaylistHeaderViewDelegate, AWEMusicBottomPlayerStatusProtocol, AWEMusicPlaylistTableViewCellDelegate, AWEMusicBottomPlayerCanShowProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMusicPlaylistViewControllerViewModel *viewModel;
@property (retain, nonatomic) AWEMusicExceptionalView *errorView;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *naviTitle;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEMusicPlayEventService *musicEventService;
@property (nonatomic) BOOL isSelfPlayer;
@property (nonatomic) BOOL isCurrentLoginUser;
@property (retain, nonatomic) AWEMusicPlaylistHeaderView *tableHeaderView;
@property (nonatomic) BOOL isMiniLuna;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPlaylistWithUserID:(id)a0 secUid:(id)a1 title:(id)a2 musicService:(id)a3 from:(id)a4 previousPage:(id)a5 isMiniLuna:(BOOL)a6 eventModel:(id)a7;

- (void)noNetViewDidTapTryAgain:(id)a0;
- (void)onBackButtonClicked;
- (id)etPageName;
- (id)p_cellViewModelAtIndexPath:(id)a0;
- (void)viewModelDidChanged:(id)a0 type:(unsigned long long)a1 index:(id)a2;
- (void)bottomPlayerStatusChanged:(BOOL)a0;
- (void)p_loadmore;
- (void)headerViewDidTapAdd:(id)a0;
- (id)_getNavigationView;
- (void)p_handleAddNewPlaylist;
- (void)preparedModels:(id)a0 hasMore:(BOOL)a1 cursor:(id)a2 playlistType:(unsigned long long)a3;
- (void)p_deletePlaylistAtIndexPath:(id)a0;
- (id)p_sectionModelAtSection:(unsigned long long)a0;
- (void)p_gotoPlaylistDetailWithPlaylist:(id)a0;
- (void)p_updateTableUIAfterDelWithIndex:(id)a0;
- (void)p_tryDelPlaylistAtIndexPath:(id)a0;
- (void)onCreateNewPlayListClicked;
- (BOOL)isNeedShowFavoriteIconWithPlaylistInfo:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)isCurrentUser;
- (void)setupViews;

@end
