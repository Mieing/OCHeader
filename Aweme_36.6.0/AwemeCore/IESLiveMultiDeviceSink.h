@class IESLiveMultiDeviceObject, NSString, UIImage, BDCastServiceInfo;

@interface IESLiveMultiDeviceSink : NSObject <BDCastSinkManagerDelegate>

@property (retain, nonatomic) BDCastServiceInfo *connectServiceInfo;
@property (retain, nonatomic) IESLiveMultiDeviceObject *deviceObject;
@property (copy, nonatomic) NSString *sourceIp;
@property (nonatomic) BOOL useSourceCamera;
@property (nonatomic) BOOL pauseLiveFlag;
@property (nonatomic) BOOL isFirstFrame;
@property (nonatomic) double firstFrameTime;
@property (copy, nonatomic) NSString *reverseDeviceIp;
@property (nonatomic) BOOL isReverseConnected;
@property (nonatomic) double reportStamp;
@property (nonatomic) long long reportMessageTimeIntervalLimit;
@property (nonatomic) unsigned long long connectState;
@property (copy, nonatomic) NSString *deviceSinkQrString;
@property (retain, nonatomic) UIImage *qrCodeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onNetworkStatusChanged:(id)a0;
- (void)castSinkManager:(id)a0 didStartWithSdkType:(long long)a1 serviceInfo:(id)a2;
- (void)castSinkManager:(id)a0 didStopWithSdkType:(long long)a1 serviceInfo:(id)a2;
- (void)castSinkManager:(id)a0 sdkType:(long long)a1 onLog:(id)a2 serviceInfo:(id)a3;
- (void)castSinkManager:(id)a0 sdkType:(long long)a1 onError:(id)a2 serviceInfo:(id)a3;
- (id)castSinkManager:(id)a0 sdkType:(long long)a1 onRcvMessage:(id)a2 serviceInfo:(id)a3;
- (void)castSinkManager:(id)a0 onMirrorVideoData:(id)a1;
- (void)castSinkManager:(id)a0 onMirrorAudioData:(id)a1;
- (void)castSinkManager:(id)a0 mirrorConnect:(id)a1 sourceIp:(id)a2;
- (void)castSinkManager:(id)a0 mirrorDisconnect:(long long)a1 sourceIp:(id)a2 message:(id)a3;
- (BOOL)castSinkManager:(id)a0 mirrorCastRequest:(id)a1 token:(id)a2;
- (void)castSinkManager:(id)a0 onLatencyWithIp:(id)a1 stat:(id)a2;
- (void)castSinkManager:(id)a0 sourceIp:(id)a1 recvMeta:(id)a2;
- (void)castSinkManager:(id)a0 sourceIp:(id)a1 stuckStat:(id)a2;
- (void)castSinkManagerDidReverseConnect:(id)a0;
- (void)castSinkManager:(id)a0 recvResponseForReverseInviteRequest:(BOOL)a1;
- (void)castSinkManager:(id)a0 reverseDisconnectWithExitCode:(long long)a1 message:(id)a2;
- (void)stopCast;
- (void)sinkSendMessage:(id)a0;
- (void)reStartCastSink;
- (void)changeSinkVideoFormat:(unsigned long long)a0;
- (id)currentSourceDevice;
- (void)didDisconnect;
- (void)stopReceiveVideoBuffer;
- (void)resumeReceiveVideoBuffer;
- (id)customInfoJsonInLive:(BOOL)a0;
- (void)privatePostNotification:(id)a0 extraInfo:(id)a1;
- (BOOL)messageContainsKey:(id)a0;
- (void)dealDeviceInfoMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)privateInit;

@end
