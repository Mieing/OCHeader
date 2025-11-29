@class NSString, NSArray, AWEPlaylistInfoModel, AWEMusicPlaylistHeaderView, UITableView, AWEMusicDSPEventModel, AWEMusicExceptionalView, AWEMusicPlaylistSelectedViewControllerViewModel;
@protocol AWEMusicPlaylistSelectedViewControllerDelegate;

@interface AWEMusicPlaylistSelectedViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicPlaylistHeaderViewDelegate, AWEMusicExceptionalViewDelegate, AWEMusicBottomPlayerCanShowProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMusicPlaylistHeaderView *tableHeaderView;
@property (retain, nonatomic) AWEMusicPlaylistSelectedViewControllerViewModel *viewModel;
@property (weak, nonatomic) id<AWEMusicPlaylistSelectedViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *musicModels;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *queueName;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AWEMusicExceptionalView *errorView;
@property (retain, nonatomic) AWEPlaylistInfoModel *fromPlaylist;
@property (nonatomic) BOOL isMiniLuna;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showPlaylistSelectedControllerFromController:(id)a0 musicModels:(id)a1 scene:(id)a2 queueName:(id)a3 previousPage:(id)a4 fromPlaylist:(id)a5 isMiniLuna:(BOOL)a6 delegate:(id)a7;

- (void)onCloseButtonClicked;
- (void)noNetViewDidTapTryAgain:(id)a0;
- (void)onBackButtonClicked;
- (id)etPageName;
- (void)headerViewDidTapAdd:(id)a0;
- (id)_getNavigationView;
- (void)reportCollectEventModel:(id)a0 isSuccess:(BOOL)a1 code:(long long)a2 isRepeatCollect:(BOOL)a3;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupViews;

@end
