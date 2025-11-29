@class NSString, IESMultiDeviceMessageDelegate, IESLiveMultiDeviceSink;
@protocol IESLiveRecoder;

@interface IESLiveMultiDeviceServiceImp : IESLiveGeneralBaseService <IESLiveMultiDeviceService, IESLiveGuideActions, IESLiveAnchorRoomStatusChangeEvents> {
    NSString *_deviceConnectionInPeriod;
}

@property (retain, nonatomic) IESMultiDeviceMessageDelegate *delegateProxy;
@property (retain, nonatomic) IESMultiDeviceMessageDelegate *bufferProxy;
@property (retain, nonatomic) id<IESLiveRecoder> oldRecoder;
@property (retain, nonatomic) id<IESLiveRecoder> recoder;
@property (nonatomic) int resizeBufWidth;
@property (nonatomic) int resizeBufHeight;
@property (nonatomic) BOOL needResizeBuf;
@property (nonatomic) BOOL updatingNewRecoder;
@property (retain, nonatomic) IESLiveMultiDeviceSink *deviceSink;
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
- (void)willStopAnchorLive;
- (void)willSwitchToLiveTab;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)cameraDidSet;
- (void)addMessageDelegate:(id)a0;
- (void)removeMessageDelegate:(id)a0;
- (void)receiveVideoBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)deviceSinkConnected;
- (void)revertRecoder;
- (void)pauseSinkDeviceVideoBuffer;
- (void)resumeSinkDeviceVideoBuffer;
- (void)sinkSendMessage:(id)a0;
- (unsigned long long)sourceConnectState;
- (unsigned long long)sinkConnectState;
- (long long)sinkConnectionDuration;
- (long long)sinkConnectionWithCurrentTime:(double)a0;
- (void)didReceiveSourceMessage:(id)a0;
- (void)sinkDeviceDisConnect;
- (void)setMultiDeviceConnectionInPeriod:(id)a0;
- (id)multiDeviceConnectionInPeriod;
- (void)initMultiDeviceSink;
- (void)reStartCastSink;
- (BOOL)useSourceCamera;
- (void)changeSinkVideoFormat:(unsigned long long)a0;
- (void)changeRecoderToMultiDevice;
- (id)deviceSinkQrString;
- (void)didReceiveSinkMessage:(id)a0;
- (BOOL)isCameraNotAuthorized;
- (void)didSinkDeviceStateEvent:(id)a0;
- (void)didSinkMetaReadyEvent:(id)a0;
- (void)stopCastAndSource;
- (void).cxx_destruct;

@end
