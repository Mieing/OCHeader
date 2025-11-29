@class IESLiveLGameScreenCastManager, NSString, BDLOCNativeGameInstance, IESLiveLGameDuringLiveModel, IESLiveLGameDuringLiveMessageImpl, IESLivePrivacyPolicyToken, UIViewController;

@interface IESLiveLGameAnchorAppInstance : NSObject <BDLOCNativeGameInstanceDelegate, IESLiveLGameDuringLiveMessageDelegate>

@property (nonatomic) BOOL shouldShowInstantPlayGuide;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) double startTime;
@property (retain, nonatomic) BDLOCNativeGameInstance *gameInstance;
@property (weak, nonatomic) UIViewController *gameController;
@property (retain, nonatomic) IESLiveLGameDuringLiveModel *duringLiveModel;
@property (retain, nonatomic) IESLiveLGameScreenCastManager *screenCastManager;
@property (retain, nonatomic) IESLiveLGameDuringLiveMessageImpl *messageImpl;
@property (retain, nonatomic) IESLivePrivacyPolicyToken *privacyToken;
@property (nonatomic) long long gameStatus;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *oeSource;
@property (nonatomic) BOOL isGameScreenCasting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanXPlayCache:(id)a0;

- (void)didSetAttachingDIContext;
- (void)updateSchema:(id)a0;
- (void)appEnterBackground:(id)a0;
- (BOOL)isXplayGame;
- (void)app:(id)a0 sendFrameBuffer:(struct __CVBuffer { } *)a1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)app:(id)a0 screenRecordStatusChange:(BOOL)a1;
- (void)appID:(id)a0 sendAudioFrame:(id)a1;
- (void)appID:(id)a0 didReceiveMergeStreamFailed:(id)a1;
- (void)app:(id)a0 didReceiveMessage:(id)a1 callback:(id /* block */)a2;
- (void)app:(id)a0 viewDidLoad:(id)a1;
- (void)app:(id)a0 viewWillAppear:(id)a1;
- (void)app:(id)a0 viewDidAppear:(id)a1;
- (void)app:(id)a0 viewWillDisappear:(id)a1;
- (void)app:(id)a0 viewDidDisappear:(id)a1;
- (void)app:(id)a0 taskAndCommonReady:(BOOL)a1;
- (void)appFirstFrameDidShow:(id)a0;
- (void)appWarmBootDone:(id)a0;
- (void)appWorkBeforeClose:(id)a0 closeType:(id)a1;
- (void)app:(id)a0 orientationChange:(long long)a1;
- (void)appEnterForeground:(id)a0;
- (void)sendMessageToGame:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (double)gameDuration;
- (void)buildMessageImpl;
- (void)messageCall:(id)a0;
- (BOOL)isSameGame:(id)a0;
- (void)closeGameContainer:(id /* block */)a0;
- (id)appID;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)launch;
- (void)dealloc;
- (void)forceClose;
- (void)updateModel:(id)a0;

@end
