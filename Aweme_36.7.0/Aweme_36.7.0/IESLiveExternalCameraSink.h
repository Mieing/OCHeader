@class NSString, IESLiveMultiDeviceObject;
@protocol IESLiveBDCastSinkService, IESLiveExternalCameraSinkProtocol;

@interface IESLiveExternalCameraSink : NSObject <IESLiveBDCastSinkProtocol>

@property (retain, nonatomic) IESLiveMultiDeviceObject *deviceObject;
@property (copy, nonatomic) NSString *sourceIp;
@property (nonatomic) BOOL pauseVideoReceiveFlag;
@property (nonatomic) BOOL pauseAudioReceiveFlag;
@property (nonatomic) BOOL enableFakeAudioPushFlag;
@property (nonatomic) BOOL isFirstFrame;
@property (nonatomic) double firstFrameTime;
@property (nonatomic) double reportStamp;
@property (nonatomic) long long reportMessageTimeIntervalLimit;
@property (retain, nonatomic) id<IESLiveBDCastSinkService> sink;
@property (nonatomic) BOOL disableBytecastLog;
@property (nonatomic) double maxDeltaPtsDiff;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } deltaCTM;
@property (nonatomic) unsigned long long connectState;
@property (weak, nonatomic) id<IESLiveExternalCameraSinkProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)stopCast;
- (void)trackerWithEventName:(id)a0 params:(id)a1;
- (void)startCast;
- (void)startPushFakeAudioData;
- (void)stopPushFakeAudioData;
- (id)currentSourceDevice;
- (void)didDisconnect;
- (void)stopReceiveVideoBuffer;
- (void)resumeReceiveVideoBuffer;
- (id)customInfoJsonInLive:(BOOL)a0;
- (void)privatePostNotification:(id)a0 extraInfo:(id)a1;
- (BOOL)messageContainsKey:(id)a0;
- (void)dealDeviceInfoMessage:(id)a0;
- (void)stopReceiveAudioData;
- (void)resumeReceiveAudioData;
- (void)createCastSink;
- (void)didStartWithSdkType:(long long)a0 serviceInfo:(id)a1;
- (void)didStopWithSdkType:(long long)a0 serviceInfo:(id)a1;
- (id)encryptionKeyForSDKType:(long long)a0;
- (void)onLog:(id)a0 sdkType:(long long)a1 serviceInfo:(id)a2;
- (void)mirrorConnect:(id)a0 sourceIp:(id)a1;
- (void)mirrorDisconnectWithSourceIp:(id)a0 exitCode:(long long)a1 message:(id)a2;
- (BOOL)mirrorCastRequest:(id)a0 token:(id)a1;
- (void)mirrorCancelRequest:(id)a0;
- (void)onMirrorVideoData:(id)a0;
- (void)onMirrorAudioData:(id)a0;
- (void)onError:(id)a0 sdkType:(long long)a1 serviceInfo:(id)a2;
- (void)stuckStat:(id)a0 sourceIp:(id)a1;
- (void)onLatencyWithIp:(id)a0 stat:(id)a1;
- (id)connectDeviceInfo;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)privateInit;

@end
