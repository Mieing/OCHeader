@class BDCastSinkManager, NSString;

@interface IESLiveBDCastSink : NSObject <BDCastSinkManagerDelegate, IESLiveBDCastSinkService>

@property (retain, nonatomic) BDCastSinkManager *sinkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)externalCameraSinker;
+ (id)multiDeviceSinker;

- (void)didSetAttachingDIContext;
- (void)setEnableLog:(BOOL)a0 level:(long long)a1;
- (void)enableBackgroundKeepAlive;
- (void)castSinkManager:(id)a0 didStartWithSdkType:(long long)a1 serviceInfo:(id)a2;
- (void)castSinkManager:(id)a0 didStopWithSdkType:(long long)a1 serviceInfo:(id)a2;
- (void)castSinkManager:(id)a0 sdkType:(long long)a1 onLog:(id)a2 serviceInfo:(id)a3;
- (void)castSinkManager:(id)a0 sdkType:(long long)a1 onError:(id)a2 serviceInfo:(id)a3;
- (id)castSinkManager:(id)a0 sdkType:(long long)a1 onRcvMessage:(id)a2 serviceInfo:(id)a3;
- (id)castSinkManager:(id)a0 encryptionKeyForSDKType:(long long)a1;
- (void)castSinkManager:(id)a0 onMirrorVideoData:(id)a1;
- (void)castSinkManager:(id)a0 onMirrorAudioData:(id)a1;
- (void)castSinkManager:(id)a0 mirrorConnect:(id)a1 sourceIp:(id)a2;
- (void)castSinkManager:(id)a0 mirrorDisconnect:(long long)a1 sourceIp:(id)a2 message:(id)a3;
- (BOOL)castSinkManager:(id)a0 mirrorCastRequest:(id)a1 token:(id)a2;
- (void)castSinkManager:(id)a0 mirrorCancelRequest:(id)a1;
- (void)castSinkManager:(id)a0 onLatencyWithIp:(id)a1 stat:(id)a2;
- (void)castSinkManager:(id)a0 sourceIp:(id)a1 recvMeta:(id)a2;
- (void)castSinkManager:(id)a0 sourceIp:(id)a1 stuckStat:(id)a2;
- (void)castSinkManagerDidReverseConnect:(id)a0;
- (void)castSinkManager:(id)a0 recvResponseForReverseInviteRequest:(BOOL)a1;
- (void)castSinkManager:(id)a0 reverseDisconnectWithExitCode:(long long)a1 message:(id)a2;
- (void)castSinkManager:(id)a0 trackerWithEventName:(id)a1 params:(id)a2;
- (void)enableConsoleLog:(BOOL)a0;
- (void)disconnectByteLinkWithIp:(id)a0;
- (void)setRender:(id)a0 forKey:(id)a1 renderType:(unsigned long long)a2;
- (void)setBytelinkDelegateAudioFormat:(unsigned long long)a0;
- (void)setBytelinkDelegateVideoFormat:(unsigned long long)a0;
- (void)disconnectMirrorWithIP:(id)a0 sdkType:(long long)a1;
- (void)sendMessage:(id)a0 serviceInfo:(id)a1 sdkType:(long long)a2 callback:(id /* block */)a3;
- (void)stopCast;
- (void)startCastWithSdkType:(long long)a0 portInvite:(long long)a1 customInfo:(id)a2 needPublish:(BOOL)a3;
- (void).cxx_destruct;

@end
