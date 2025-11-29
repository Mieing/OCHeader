@class NSString, BDPUniqueID;
@protocol AWEAwemeBizPlayVideoProtocol;

@interface AWEFeedUserInteractImpl : HTSService <AWEIronManFeedUEBridgeProtocol, BDPContainerLifeCycleMessage>

@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol> videoDelegate;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL shouldResumeFromSystemInterruption;
@property (nonatomic) BOOL interruptByTimor;
@property (nonatomic) BOOL pauseByTimor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)initConfig;
- (void)enterForeGround:(id)a0;
- (void)setFeedVideoDelegate:(id)a0;
- (BOOL)isTimorShowing;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)didReceiveAudioInterrupt:(id)a0;
- (void)enterBackgroud:(id)a0;
- (void)pauseFeedVideo;
- (void).cxx_destruct;
- (id)init;

@end
