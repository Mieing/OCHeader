@class NSDictionary, AWEMusicSongListSelectViewController, NSObject, UIViewController, NSMutableArray, UIView, AWEPlaylistInfoModel, NSString, AWEMusicSelectSearchViewController, LunaPlayEventService, AWEMusicPlayEventService, AWEMusicDSPEventModel, AWEMusicSelectTopView;
@protocol MusicService, AWEMusicSelectContainerViewControllerDelegate;

@interface AWEMusicSelectContainerViewController : AWEMiniLunaBaseViewController <AWEMusicPresentPushInnerProvider, AWEMusicDispatchPlaylistProtocol, AWEMusicSongListSelectDelegate>

@property (copy, nonatomic) NSString *playlistID;
@property (retain, nonatomic) AWEMusicSelectTopView *topView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEMusicSongListSelectViewController *recommendListVC;
@property (retain, nonatomic) AWEMusicSelectSearchViewController *searchListVC;
@property (retain, nonatomic) NSObject<MusicService> *musicService;
@property (retain, nonatomic) AWEMusicPlayEventService *playEventService;
@property (retain, nonatomic) LunaPlayEventService *lunaPlayEventService;
@property (nonatomic) long long addMusicNum;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) UIViewController *currentVC;
@property (retain, nonatomic) NSMutableArray *allTrackIDs;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (nonatomic) BOOL isEmpty;
@property (weak, nonatomic) id<AWEMusicSelectContainerViewControllerDelegate> delegate;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) BOOL needOffline;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaylistInfo:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 previousPage:(id)a3 pageName:(id)a4;
- (void)playlistSongsChangedWithType:(unsigned long long)a0 playlistId:(id)a1 changeModels:(id)a2 from:(id)a3;
- (void)reportCollectEventModel:(id)a0 isSuccess:(BOOL)a1 code:(long long)a2 isRepeatCollect:(BOOL)a3;
- (void)p_offlineAddMusicWithModel:(id)a0 scene:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)p_addMusicWithModel:(id)a0 scene:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)p_trackAddSongEventWithItem:(id)a0 params:(id)a1;
- (long long)topViewStyle;
- (void)addMusicWithModel:(id)a0 scene:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)didFetchAllTrackIDs:(id)a0;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)closeAction;
- (id)subTitle;
- (void)viewWillAppear:(BOOL)a0;
- (id)title;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)searchTextChanged:(id)a0;

@end
