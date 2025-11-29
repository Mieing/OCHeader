@class AWEAnchorMusicSelectRecommendViewModel, NSString, AWEMusicExceptionalView, NSObject, UITableView;
@protocol MusicService, AWEAnchorMusicSelectRecommendDelegate;

@interface AWEAnchorMusicSelectRecommendViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicServiceDelegate, AWEMusicSongSelectTableViewCellDelegate, AWEMusicExceptionalViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMusicExceptionalView *errorView;
@property (retain, nonatomic) AWEMusicExceptionalView *noRecommendMusicView;
@property (retain, nonatomic) AWEAnchorMusicSelectRecommendViewModel *viewModel;
@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSObject<MusicService> *musicService;
@property (weak, nonatomic) id<AWEAnchorMusicSelectRecommendDelegate> delegate;
@property (copy, nonatomic) id /* block */ selectMusicBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appWillResignActiveNotification;
- (void)addNoti;
- (id)textLoadingView;
- (id)initWithMusicId:(id)a0 musicService:(id)a1;
- (void)cellDidTapAddSong:(id)a0;
- (void)noNetViewDidTapTryAgain:(id)a0;
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
- (void)setupViews;

@end
