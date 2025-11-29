@class NSString;

@interface WCRedEnvelopesControlMgr : WCBaseControlMgr <JSEventExt, WCHBOpenApiExt>

@property (nonatomic) BOOL m_bRceivingGreeting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceTerminate;
- (BOOL)isLastLogicTheSame:(Class)a0;
- (unsigned int)startLogic:(id)a0;
- (void)stopCurrentLogic;
- (unsigned int)startSendRedEnvelopesLogic:(id)a0 Data:(id)a1;
- (BOOL)checkIsCanSendRedEnvelopesLogic;
- (unsigned int)startSendRedEnvelopesLogic:(id)a0 WithSelectContact:(id)a1 Scene:(unsigned int)a2 RedEnvelopesType:(unsigned long long)a3;
- (unsigned int)startSendRedEnvelopesLogic:(id)a0 Data:(id)a1 WithSelectContact:(id)a2 Scene:(unsigned int)a3 RedEnvelopesType:(unsigned long long)a4;
- (unsigned int)startReceiveRedEnvelopesLogic:(id)a0 Data:(id)a1;
- (unsigned int)startReceiveRedEnvelopesLogic:(id)a0 Data:(id)a1 Scene:(unsigned int)a2;
- (unsigned int)startReceivedRedEnvelopesListLogic:(id)a0 Data:(id)a1;
- (unsigned int)startSendEnvelopesReceivedListLogic:(id)a0 Data:(id)a1;
- (unsigned int)startSendNotReceivedListEnvelopesReceivedListLogic:(id)a0 Data:(id)a1;
- (unsigned int)startSendGeetingRedEnvelopesLogic:(id)a0 Data:(id)a1;
- (unsigned int)startSendGeetingRedEnvelopesLogicWithShake:(id)a0 Data:(id)a1;
- (unsigned int)startSendGeetingRedEnvelopesLogic:(id)a0 Data:(id)a1 Scene:(unsigned long long)a2;
- (unsigned int)startReceiveRedEnvelopesLogicByC2C:(id)a0 Data:(id)a1;
- (unsigned int)startReceiveRedEnvEnterpriseLogicWithOpenApiInner:(id)a0 AppId:(id)a1 BundleId:(id)a2 universalLink:(id)a3 HBParam:(id)a4;
- (unsigned int)startBrandServiceControlLogic:(id)a0 NativeUrl:(id)a1;
- (unsigned int)startSystemMessageControlLogic:(id)a0 NativeUrl:(id)a1 messageWrap:(id)a2;
- (unsigned int)startReceiveRedEnvelopesLogicWithJS:(id)a0 Data:(id)a1 Scene:(int)a2 Event:(id)a3;
- (void)jsGetRecevieBizHongBaoRequest:(id)a0;
- (void)OnWCHBOpenApi:(id)a0 withAppID:(id)a1 andBundleID:(id)a2 universalLink:(id)a3;
- (unsigned int)startReceiveGreetingRedEnvelopesLogic:(id)a0 Data:(id)a1;
- (BOOL)UseBalance;
- (unsigned int)startOpenRedEnvelopesDetail:(id)a0 sendId:(id)a1 hbKind:(unsigned int)a2 receiveId:(id)a3;
- (unsigned int)startOverseaRedEnvelopesDetail:(id)a0 sendId:(id)a1;
- (unsigned int)startPreviewRedEnvelopes:(id)a0 Data:(id)a1;
- (unsigned int)startOverseaReceiveRedEnvelopesLogic:(id)a0 Data:(id)a1 Scene:(unsigned int)a2;
- (unsigned int)startSendOpenIMRedEnvelopesLogic:(id)a0 Scene:(unsigned int)a1 WithSelectContact:(id)a2;
- (unsigned int)startSendOpenIMRedEnvelopesLogic:(id)a0 Data:(id)a1 Scene:(unsigned int)a2 WithSelectContact:(id)a3;
- (unsigned int)startOverseaSystemMessageControlLogic:(id)a0 NativeUrl:(id)a1 messageWrap:(id)a2;
- (unsigned int)startOpenIMSystemMessageLogic:(id)a0 nativeUrl:(id)a1 messageWrap:(id)a2 withSelectedContact:(id)a3;
- (unsigned int)startSendLiveStreamEnvelopesLogic:(id)a0 liveStreamId:(id)a1 liveStreamInfo:(id)a2 senderIdentity:(unsigned int)a3;
- (unsigned int)startReceiveLiveStreamRedEnvelopesLogic:(id)a0 messageWrap:(id)a1 liveStreamId:(id)a2 liveStreamInfo:(id)a3 senderIdentity:(unsigned int)a4;
- (unsigned int)startOpenLiveStreamRedEnvelopesDetail:(id)a0 sendId:(id)a1;
- (unsigned int)startStreamRedEnvelopesDetailSystemMessageControlLogic:(id)a0 NativeUrl:(id)a1 senderIdentity:(unsigned int)a2;
- (unsigned int)startReceiveLiveStreamRedEnvelopesLogic:(id)a0 messageWrap:(id)a1 showCustomMessage:(id)a2 senderIdentity:(unsigned int)a3;
- (unsigned int)startReceiveLiveStreamRedEnvelopesLogic:(id)a0 Data:(id)a1 Scene:(unsigned int)a2;
- (unsigned int)startOpenTextStateRedenvelopesDetailLogic:(id)a0 delegate:(id)a1;
- (long long)getCurrentRedEnvLaunchMode;
- (void)resetCurrentRedEnvLaunchMode;
- (void)refreshCurrentRedEnvLaunchMode:(long long)a0;

@end
