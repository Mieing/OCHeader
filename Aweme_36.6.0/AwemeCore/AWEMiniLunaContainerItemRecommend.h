@class LunaPlayerViewController, NSString, LunaRecommendDataSource, AWEMiniLunaContext, NSArray;
@protocol MusicService;

@interface AWEMiniLunaContainerItemRecommend : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicContainerItemProtocol>

@property (retain, nonatomic) LunaPlayerViewController *innerVC;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) LunaRecommendDataSource *dataSource;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) AWEMiniLunaContext *context;
@property (nonatomic) BOOL canAutoStartPlay;
@property (nonatomic) BOOL canShowSKOverlay;
@property (nonatomic) unsigned long long initTabType;
@property (readonly, nonatomic) LunaPlayerViewController *player;
@property (retain, nonatomic) NSArray *entranceModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedViewDidLoad:(id)a0;
- (unsigned long long)tabType;
- (void)receiveNotification:(id)a0;
- (void)feedDidRetry:(id)a0;
- (void)feed:(id)a0 didDismissAnimation:(BOOL)a1;
- (id)topNavBarTitle;
- (BOOL)needSeperateLine;
- (id)miniPage;
- (void)p_request;
- (void)loadEntranceModel;
- (void)resetMainPlayerQueue:(id)a0;
- (void)et_reportPerfFeedEntity:(BOOL)a0 netDuration:(double)a1 parsarModelTime:(double)a2 modelCount:(int)a3;
- (void)checkShowChangeSongGuide;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)viewController;
- (BOOL)isDarkTheme;
- (void)dealloc;
- (void)setAppearing:(BOOL)a0;
- (id)tabName;

@end
