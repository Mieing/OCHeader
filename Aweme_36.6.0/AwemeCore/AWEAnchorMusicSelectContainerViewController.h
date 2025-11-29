@class UIView, NSString, AWEAnchorMusicSelectRecommendViewController, LunaPlayEventService, NSDictionary, AWEAnchorMusicSelectSearchViewController, NSObject, AWEMusicSelectTopView, UIViewController, AWEMusicDSPEventModel, AWEMusicPlayEventService;
@protocol MusicService;

@interface AWEAnchorMusicSelectContainerViewController : UIViewController <AWEAnchorMusicSelectRecommendDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIViewController *currentVC;
@property (retain, nonatomic) AWEAnchorMusicSelectRecommendViewController *recommendListVC;
@property (retain, nonatomic) AWEAnchorMusicSelectSearchViewController *searchListVC;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEMusicSelectTopView *topView;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (retain, nonatomic) NSObject<MusicService> *musicService;
@property (retain, nonatomic) AWEMusicPlayEventService *playEventService;
@property (retain, nonatomic) LunaPlayEventService *lunaPlayEventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)trackPageShow;
- (void)trackSelectSongWithModel:(id)a0;
- (void)addLunaMusicAnchorWithModel:(id)a0;
- (void)noRecommendMusic;
- (id)initWithMusicId:(id)a0 shootWay:(id)a1 pageName:(id)a2 eventModel:(id)a3 extraParams:(id)a4;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)closeAction;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)searchTextChanged:(id)a0;

@end
