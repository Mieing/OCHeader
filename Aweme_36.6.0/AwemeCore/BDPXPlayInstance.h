@class NSString, BDPUniqueID, BDPXPlaySystemAPIHandler;
@protocol BDPXPlayModelProtocol, BDPXPlayManagerDelegateProtocol, BDPEngineFrameDelegate, XPlayItemProtocol;

@interface BDPXPlayInstance : NSObject <BDPBootLifeCycleMessage, BDPXPlayInstanceProtocol, XPlayItemDelegate, XPlayCloudMessageDelegate, XPlayCloudPlayerDelegate>

@property (weak, nonatomic) id<BDPXPlayManagerDelegateProtocol> managerDelegate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) id<XPlayItemProtocol> xPlayItem;
@property (retain, nonatomic) id<BDPXPlayModelProtocol> xPlayModel;
@property (retain, nonatomic) BDPXPlaySystemAPIHandler *systemAPIHandler;
@property (nonatomic) BOOL isMixLaunch;
@property (copy, nonatomic) id /* block */ loadCompletionBlock;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } frameDelegateLock;
@property (weak, nonatomic) id<BDPEngineFrameDelegate> frameDelegate;
@property (nonatomic) BOOL isGameStop;
@property unsigned long long loadState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL isXplayFirstFrameReached;
@property (nonatomic) BOOL isExitUnusual;

+ (id)getSettings;

- (void)playItem:(id)a0 preloadDidFailed:(id)a1;
- (void)playItem:(id)a0 preloadDidSucceed:(id)a1;
- (void)didReceiveRTCCustomMessageWithString:(id)a0;
- (void)playItem:(id)a0 playQualityStats:(id)a1;
- (void)playItem:(id)a0 remoteVideoRotationChanged:(long long)a1;
- (void)playItem:(id)a0 onRemotePodEvent:(unsigned long long)a1 info:(id)a2;
- (void)playItem:(id)a0 audioFrame:(id)a1;
- (void)sendRTCCustomMessageWithString:(id)a0 callback:(id /* block */)a1;
- (void)stopMuxing;
- (void)item:(id)a0 cloudPlayer:(id)a1 playStatusDidUpdated:(unsigned long long)a2 info:(id)a3;
- (id)getContentVC;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)startMuxingWithForwardInfo:(id)a0 mixInfo:(id)a1 frameDelegate:(id)a2;
- (id)getGameView;
- (void)closeGame:(id)a0;
- (void)loadGame:(id)a0 model:(id)a1 isPreload:(BOOL)a2 isMixLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (void)setIsAudioMute:(BOOL)a0;
- (BOOL)isAllConditionReadyAfterVCShow:(id)a0;
- (id)initWithUniqueID:(id)a0 gameID:(id)a1 managerDelegate:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getGameFrame:(id)a0;
- (void)initSettings;
- (BOOL)isValidLibVersion;
- (BOOL)isNotFeedInnerFlow;
- (BOOL)isFeedInnerFlow;
- (void)showExitAlertWithTitle:(id)a0 description:(id)a1 completion:(id /* block */)a2;
- (void)updateLoadingProcess:(double)a0;
- (void)loadGameWithConfiguration:(id)a0 schema:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (void)buildConfiguration:(id)a0 model:(id)a1 xplayModel:(id)a2 completion:(id /* block */)a3;
- (id)handleLoadPlayItemFailWithInfo:(id)a0 error:(id)a1;
- (id)createReportErrorParamsWithCode:(long long)a0 errMsg:(id)a1;
- (void)initXPlayItem:(id)a0;
- (void)startXplayGame;
- (void)stopXplayGame;
- (void)handleLoadCompletionWithIsSuccess:(BOOL)a0 error:(id)a1;
- (void)setCloudPlayerDelegate;
- (void)setSystemAPIDelegate;
- (void)invoke:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)showLongTimeNoOperationAlert:(id /* block */)a0;
- (id)handlePlayErrorWithInfo:(id)a0;
- (void)didReceiveCrashInfoWithGameId:(id)a0 packageName:(id)a1 callStack:(id)a2;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)preload;
- (void)resume;
- (void)dealloc;

@end
