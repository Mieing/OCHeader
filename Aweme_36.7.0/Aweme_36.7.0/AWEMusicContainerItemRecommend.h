@class NSString, NSArray, AWEMusicStreamingQueuesHandler, AWEMusicMainFeedViewController;
@protocol MusicService;

@interface AWEMusicContainerItemRecommend : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicContainerItemProtocol>

@property (retain, nonatomic) AWEMusicMainFeedViewController *innerVC;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEMusicStreamingQueuesHandler *queuesHandler;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) NSArray *entranceModels;
@property (nonatomic) BOOL canAutoStartPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedViewDidLoad:(id)a0;
- (unsigned long long)tabType;
- (void)receiveNotification:(id)a0;
- (void)feedDidRetry:(id)a0;
- (id)topNavBarTitle;
- (BOOL)needSeperateLine;
- (id)miniPage;
- (void)p_request;
- (void)loadEntranceModel;
- (void)resetMainPlayerQueue:(id)a0;
- (void)et_reportPerfFeedEntity:(BOOL)a0 netDuration:(double)a1 parsarModelTime:(double)a2 modelCount:(int)a3;
- (id)initWithUserModel:(id)a0 musicService:(id)a1 eventModel:(id)a2;
- (id)initWithUserModel:(id)a0 musicService:(id)a1;
- (void).cxx_destruct;
- (id)viewController;
- (BOOL)isDarkTheme;
- (void)setAppearing:(BOOL)a0;
- (id)tabName;

@end
