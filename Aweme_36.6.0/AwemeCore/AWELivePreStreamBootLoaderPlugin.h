@class IESLiveComponentBootLoader, NSString, NSTimer, AWEAwemeModel, NSNumber, HTSLiveRoom;
@protocol IESLiveHTTPTask, IESLiveGeneralService, AWELivePreStreamBootLoaderPluginLifeCycle;

@interface AWELivePreStreamBootLoaderPlugin : NSObject <IESLiveComponentLifeCycleNotifier, AWELivePreStreamBootLoaderPluginService>

@property (retain, nonatomic) IESLiveComponentBootLoader *bootLoader;
@property (retain, nonatomic) HTSLiveRoom *liveRoom;
@property (retain, nonatomic) id<IESLiveHTTPTask> roomTask;
@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<IESLiveGeneralService> generalServiceManager;
@property (nonatomic) double enterLiveRoomTimeInterval;
@property (retain, nonatomic) NSTimer *invalidTimer;
@property (weak, nonatomic) id<AWELivePreStreamBootLoaderPluginLifeCycle> bootLoaderPluginLifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)effectiveTime;
- (void)viewControllerDidAppear;
- (void)viewControllerWillDisappear;
- (void)startEnterLiveRoom;
- (void)enterLiveRoomFail;
- (void)streamPlayerStateDidChanged:(unsigned long long)a0;
- (void)streamPlayerFirstFrame;
- (void)stopInvalidTimer;
- (void)createTimerIfNeed;
- (void)uninstallBootLoader;
- (void)loadBootLoader;
- (void)checkEnterPreviewRoomReuseIfNeed;
- (BOOL)canLoadBootLoader;
- (void)createBootloaderWithRoom:(id)a0;
- (void)runBootloaderWithRoom:(id)a0;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (id)convertPreviewToLive:(id)a0;
- (void)setupRoomModelService:(id)a0 trackContext:(id)a1;
- (void)createBootLoaderIfNeed;
- (void)checkBootLoader;
- (void)enterLiveRoomSuccessUninstall;
- (void).cxx_destruct;
- (void)play;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)viewControllerWillAppear;
- (void)applicationWillResignActive;
- (void)viewControllerDidDisappear;
- (void)applicationWillEnterForeground;
- (void)applicationWillTerminate;
- (void)reset;
- (void)dealloc;
- (void)configureWithModel:(id)a0;

@end
