@class UINavigationController, NSString, MMFlutterViewController;
@protocol TingPlayApp;

@interface FinderAudioRoute : MMUserService <MMServiceProtocol>

@property (class, readonly, nonatomic) FinderAudioRoute *shared;

@property (retain, nonatomic) MMFlutterViewController *appViewController;
@property (retain, nonatomic) UINavigationController *appContainer;
@property (retain, nonatomic) id<TingPlayApp> FAPlayApp;
@property (nonatomic) unsigned int netType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTingAudioRemove;

- (void)openMainFeedWithBuffer:(id)a0 params:(id)a1;
- (void)openPlayingTaskServicePage;
- (void)openMineAudioPage;
- (void)openListRepoPageWithInfo:(id)a0 index:(int)a1;
- (void)openCategoryCollection:(id)a0 isAuthor:(id)a1;
- (void)openAudioAuthorPage:(id)a0;
- (void)initPlayApp;
- (void)createOrReuseFlutterPageRouteName:(id)a0 params:(id)a1;
- (BOOL)isAppAlive;
- (BOOL)isFinderAudioEntryEnable;
- (BOOL)isFinderAudioAppEnable;
- (BOOL)isInnerUser;
- (void)releaseFlutterInstance;
- (void)finderSleepModeJumpTingWithByPassBuffer:(id)a0 params:(id)a1;
- (void)initPlayTaskController;
- (id)extraPlugins;
- (BOOL)checkNeedTerminateApp;
- (void)terminateAppImmediatly;
- (int)getAppEnterScene;
- (id)getAppSessionId;
- (int)getAudioSessionRoute;
- (int)getNetType;
- (id)getPlayerReportContext;
- (id)getPlayerTingItem;
- (id)getPlayingTask;
- (id)getTapeItem;
- (int)getVolume;
- (BOOL)isPlaying;
- (void).cxx_destruct;

@end
