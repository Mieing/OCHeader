@class NSString, AWEPlaylistInfoModel, AWEMusicExceptionalView, AWEMusicSongListSelectViewControllerViewModel, NSObject, UITableView;
@protocol MusicService, AWEMusicSongListSelectDelegate;

@interface AWEMusicSongListSelectViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicServiceDelegate, AWEMusicSongSelectTableViewCellDelegate, AWEMusicDispatchPlaylistProtocol, AWEMusicExceptionalViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMusicSongListSelectViewControllerViewModel *viewModel;
@property (retain, nonatomic) NSObject<MusicService> *musicService;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistModel;
@property (retain, nonatomic) AWEMusicExceptionalView *errorView;
@property (nonatomic) BOOL isEmpty;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) BOOL isOfflineMode;
@property (weak, nonatomic) id<AWEMusicSongListSelectDelegate> delegate;
@property (copy, nonatomic) id /* block */ addMusicBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appWillResignActiveNotification;
- (void)addNoti;
- (id)textLoadingView;
- (void)cellDidTapAddSong:(id)a0;
- (void)noNetViewDidTapTryAgain:(id)a0;
- (void)playlistSongsChangedWithType:(unsigned long long)a0 playlistId:(id)a1 changeModels:(id)a2 from:(id)a3;
- (id)initWithPlaylistModel:(id)a0 musicService:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)modalPresentationStyle;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupViews;

@end
