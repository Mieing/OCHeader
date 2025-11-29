@class UIView, NSString, AWEUITextLoadingView, AWEMusicSelectSearchStayHelper, UITableView, AWEMusicSelectSearchViewModel, NSMutableArray, AWEMusicExceptionalView;
@protocol MusicService;

@interface AWEMusicSelectSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicSongSelectTableViewCellDelegate, AWEMusicExceptionalViewDelegate>

@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEMusicSelectSearchViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMusicExceptionalView *errorView;
@property (retain, nonatomic) AWEMusicExceptionalView *emptyView;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) UIView *screenFrameView;
@property (copy, nonatomic) id /* block */ textChangedBlock;
@property (retain, nonatomic) AWEMusicSelectSearchStayHelper *stayHelper;
@property (nonatomic) BOOL viewAppearing;
@property (nonatomic) BOOL isEmpty;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isMiniLuna;
@property (retain, nonatomic) NSMutableArray *allTrackIDs;
@property (nonatomic) BOOL isOfflineMode;
@property (copy, nonatomic) id /* block */ addMusicBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appWillResignActiveNotification;
- (void)addNotification;
- (id)textLoadingView;
- (void)refreshSearchText:(id)a0;
- (void)cellDidTap:(id)a0 play:(BOOL)a1;
- (void)cellDidTapAddSong:(id)a0;
- (void)noNetViewDidTapTryAgain:(id)a0;
- (void)hideExceptionView;
- (void)searchKeyword:(id)a0;
- (void)searchKeyword:(id)a0 force:(BOOL)a1;
- (id)initWithPlaylistModel:(id)a0 musicService:(id)a1;
- (void)searchCellClickEventReport:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setup;
- (void)viewDidDisappear:(BOOL)a0;

@end
