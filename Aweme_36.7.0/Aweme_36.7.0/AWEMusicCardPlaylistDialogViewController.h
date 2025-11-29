@class UIView, AWEMusicCardDailyPlaylistBackgroundView, NSString, AWEUILoadingView, UIButton, _TtC21AWEMusicStreamingImpl26LunaPlaylistBottomMaskView, AWEMusicService, UITableView, AWEMusicExceptionalView, NSDictionary;
@protocol AWEMusicCardPlaylistDialogViewModelProtocol;

@interface AWEMusicCardPlaylistDialogViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicFeedPlayerDelegate, AWEMusicStreamingQueueDelegate, AWEMusicSubPlayerOuterTransitionProvider, AWEMusicExceptionalViewDelegate>

@property (retain, nonatomic) AWEMusicCardDailyPlaylistBackgroundView *backgroundHeaderView;
@property (retain, nonatomic) AWEMusicExceptionalView *exceptionView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIButton *mainBottomButton;
@property (retain, nonatomic) UIButton *subBottomButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl26LunaPlaylistBottomMaskView *bottomMaskView;
@property (retain, nonatomic) AWEMusicService *musicService;
@property (retain, nonatomic) id<AWEMusicCardPlaylistDialogViewModelProtocol> viewModel;
@property (nonatomic) BOOL tableViewDragReported;
@property (nonatomic) unsigned long long dialogType;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSDictionary *dialogInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)titleForPlayerOfQueueId:(id)a0;
- (id)subTitleForPlayerOfQueueId:(id)a0;
- (void)feed:(id)a0 didDismissAnimation:(BOOL)a1;
- (id)p_scene;
- (void)p_didClickMainButton;
- (void)noNetViewDidTapTryAgain:(id)a0;
- (void)startLoadingData;
- (void)trackDirectToLunaClickWithClickArea:(id)a0;
- (void)onClickAlbumArtists;
- (void)setBottomButtonTitle;
- (void)p_hiddenLoadMoreIfNeeded;
- (void)p_playFromMusic:(id)a0 atIndex:(long long)a1;
- (void)trackDirectToLunaClickWithClickArea:(id)a0 params:(id)a1;
- (void)p_dragEventReportIfNeeded;
- (void)p_playAll;
- (id)diversionParams;
- (void)p_didClickSubButton;
- (long long)p_dailyPlaylistMaskCount;
- (long long)p_dailyPlaylistMaskLimit;
- (void)updateTableHeaderView;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
