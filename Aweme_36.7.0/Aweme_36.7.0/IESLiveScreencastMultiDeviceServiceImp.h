@class IESLiveScreencastMultiDeviceSink, NSString, IESLiveScreencastMultiDeviceMessageDelegate;

@interface IESLiveScreencastMultiDeviceServiceImp : IESLiveGeneralBaseService <IESLiveScreencastMultiDeviceService, IESLiveGuideActions, IESLiveAnchorRoomStatusChangeEvents, IESLiveScreencastMultiDeviceSinkDelegate> {
    NSString *_deviceConnectionInPeriod;
}

@property (retain, nonatomic) IESLiveScreencastMultiDeviceMessageDelegate *delegateProxy;
@property (nonatomic) int resizeBufWidth;
@property (nonatomic) int resizeBufHeight;
@property (nonatomic) BOOL needResizeBuf;
@property (retain, nonatomic) IESLiveScreencastMultiDeviceSink *deviceSink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)serviceUninstall;
- (void)prepareAnchorLive;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)cameraDidSet;
- (void)addMessageDelegate:(id)a0;
- (void)removeMessageDelegate:(id)a0;
- (void)receiveVideoBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)deviceSinkConnected;
- (void)pauseSinkDeviceVideoBuffer;
- (void)resumeSinkDeviceVideoBuffer;
- (BOOL)useSourceBroadcast;
- (void)sinkSendMessage:(id)a0;
- (unsigned long long)sourceConnectState;
- (unsigned long long)sinkConnectState;
- (long long)sinkConnectionDuration;
- (long long)sinkConnectionWithCurrentTime:(double)a0;
- (void)didReceiveSourceMessage:(id)a0;
- (void)didReceiveSourceVideoData:(id)a0;
- (void)didReceiveSourceAudioData:(id)a0;
- (void)sinkDeviceDisConnect;
- (void)setMultiDeviceConnectionInPeriod:(id)a0;
- (id)multiDeviceConnectionInPeriod;
- (void)initMultiDeviceSink;
- (void)reStartCastSink;
- (void)changeSinkVideoFormat:(unsigned long long)a0;
- (void)didReceiveSinkMessage:(id)a0;
- (void)didSinkDeviceStateEvent:(id)a0;
- (void)stopCastAndSource;
- (void).cxx_destruct;

@end
