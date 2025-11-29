@class NSMutableDictionary, NSMapTable, NSString, IESLiveInteractXPlayMonitor;
@protocol IESLiveXPlayOuterService;

@interface IESLiveInteractXPlayServiceImp : IESLiveGeneralBaseService <IESLiveInteractXPlayService, IESLiveXPlayInstanceDelegate>

@property (retain, nonatomic) id<IESLiveXPlayOuterService> xPlayManager;
@property (retain, nonatomic) NSMutableDictionary *loadingMap;
@property (retain, nonatomic) NSMutableDictionary *instanceMap;
@property (retain, nonatomic) NSMapTable *delegateMap;
@property (retain, nonatomic) IESLiveInteractXPlayMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)serviceUninstall;
- (void)playInstance:(id)a0 preloadDidFailed:(id)a1;
- (void)playInstance:(id)a0 preloadDidSucceed:(id)a1;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstance:(id)a0 onCustomMessageReceivedWithCode:(int)a1 uniqueSeq:(id)a2 message:(id)a3;
- (void)playInstance:(id)a0 remoteVideoStateChangeWith:(long long)a1 withVideoStateReason:(long long)a2;
- (void)playInstance:(id)a0 renderPixelBuffer:(struct __CVBuffer { } *)a1 seiInfo:(id)a2 rotation:(long long)a3 contentType:(long long)a4 extendedData:(id)a5 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6;
- (void)playInstance:(id)a0 cloudPlayer:(id)a1 playStatusDidUpdated:(unsigned long long)a2 info:(id)a3;
- (void)playInstance:(id)a0 customMessage:(id)a1 didReceiveCustomRequest:(id /* block */)a2;
- (void)playInstance:(id)a0 onRemotePodStreamEvent:(BOOL)a1 error:(id)a2 extraInfo:(id)a3;
- (void)playInstance:(id)a0 didReceivePushCDNFailed:(id)a1;
- (void)playInstance:(id)a0 didReceiveRTCCustomMessageWithString:(id)a1;
- (void)playInstance:(id)a0 cameraOnCaptureRequest:(id)a1 completion:(id /* block */)a2;
- (void)playInstance:(id)a0 onReceiveRemoteFrameTimestamp:(double)a1;
- (void)playInstance:(id)a0 onFullLinkDelayResult:(double)a1;
- (BOOL)isInRoom;
- (void)startXPlayWithModel:(id)a0 first:(BOOL)a1 delegate:(id)a2;
- (void)closeXPlayWithGameId:(id)a0;
- (void)sendRTCCustomMessageWithGameId:(id)a0 message:(id)a1 callback:(id /* block */)a2;
- (int)setVideoEncoderConfig:(id)a0 gameId:(id)a1;
- (int)publishVideoStreamWithGameId:(id)a0;
- (void)bindCameraWithGameId:(id)a0 source:(long long)a1;
- (int)unpublishVideoStreamWithGameId:(id)a0;
- (id)viewControllerWithGameId:(id)a0;
- (id)sendCustomMessageWithGameId:(id)a0 message:(id)a1;
- (void)sendFrequentRTCCustomMessageWithGameId:(id)a0 message:(id)a1;
- (id)viewWithGameId:(id)a0;
- (void)addXPlayDelegate:(id)a0 gameId:(id)a1;
- (id)runningVirtualLiveModel;
- (void)setRenderProcessorTypeNoneWithGameId:(id)a0;
- (void)setRenderProcessorTypeSharpenWithGameId:(id)a0 sharpness:(double)a1 brightness:(double)a2 contrast:(double)a3;
- (void)setRenderProcessorTypeEnhanceWithGameId:(id)a0 brightness:(double)a1 contrast:(double)a2;
- (void)setPureDetectCallback:(id /* block */)a0 gameId:(id)a1;
- (long long)getFrameContentTypeWithGameId:(id)a0;
- (long long)getPureColorWithGameId:(id)a0;
- (int)switchRemoteSimulcastStreamTypeWithGameId:(id)a0 index:(int)a1;
- (id)cloudPlayerWrappersWithGameId:(id)a0;
- (int)pushExternalVideoFrame:(id)a0 gameId:(id)a1;
- (void)startMuxingWithForwardInfo:(id)a0 mixInfo:(id)a1 gameId:(id)a2;
- (void)stopMuxingWithGameId:(id)a0;
- (void)stopAllInstance;
- (void)startStatusDidChange:(id)a0 gameId:(id)a1 status:(unsigned long long)a2 error:(BOOL)a3 info:(id)a4;
- (void)addXPlayInstanceDelegate:(id)a0 delegate:(id)a1 key:(id)a2;
- (void)cancelLoadInstanceIfNeed:(id)a0;
- (void)removeXPlayInstanceWithKey:(id)a0;
- (id)xPlayDelegateWithKey:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
