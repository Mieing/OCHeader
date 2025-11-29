@class IESLiveKTVComponentContext, IESLiveKtvSongStruct, NSDictionary, IESLiveKTVCommonStore, NSString;
@protocol IESLiveInteractionLinkerService, IESLiveInteractPushStreaming;

@interface IESLivePartyKTVChorusCDNPlayComponent : IESLiveInteractComponentBase <IESLivePartyKTVCDNChorusRouter, HTSLiveMessageSubscriber>

@property (weak, nonatomic) id<IESLiveInteractPushStreaming> interactStreamer;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linkerService;
@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (weak, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (weak, nonatomic) IESLiveKtvSongStruct *songStruct;
@property (copy, nonatomic) NSDictionary *chorusBussinessConfig;
@property (nonatomic) BOOL pushingExtraMixStream;
@property (nonatomic) BOOL isPullingExtraStream;
@property (nonatomic) BOOL isPause;
@property (nonatomic) double playerLastSeekTime;
@property (nonatomic) double playerSeekThreshold;
@property (nonatomic) double playerSeekIntervalThreshold;
@property (nonatomic) double playerSyncOffset;
@property (nonatomic) double playerPlayTime;
@property (nonatomic) double playerPlayTimeLastUpdateTime;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) double originalVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)componentBindContext;
- (void)joinCDNChorusWithStreamData:(id)a0;
- (void)exitCDNChorus;
- (void)startPushingExtraStream:(id)a0;
- (void)stopPushCDNExtraStream;
- (void)startPushCDNExtraStream;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
