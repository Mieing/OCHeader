@class NSString, AWEAnchorMusicSelectSearchViewModel, AWEMusicExceptionalView, AWEUITextLoadingView, UIView, UITableView;
@protocol MusicService;

@interface AWEAnchorMusicSelectSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicSongSelectTableViewCellDelegate, AWEMusicExceptionalViewDelegate>

@property (retain, nonatomic) id<MusicService> musicService;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) BOOL viewAppearing;
@property (retain, nonatomic) AWEAnchorMusicSelectSearchViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMusicExceptionalView *errorView;
@property (retain, nonatomic) AWEMusicExceptionalView *emptyView;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) UIView *screenFrameView;
@property (copy, nonatomic) id /* block */ textChangedBlock;
@property (copy, nonatomic) id /* block */ selectMusicBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appWillResignActiveNotification;
- (void)addNotification;
- (id)textLoadingView;
- (void)refreshSearchText:(id)a0;
- (id)initWithMusicId:(id)a0 musicService:(id)a1;
- (void)cellDidTapAddSong:(id)a0;
- (void)noNetViewDidTapTryAgain:(id)a0;
- (void)hideExceptionView;
- (void)searchKeyword:(id)a0;
- (void)searchKeyword:(id)a0 force:(BOOL)a1;
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
