@class NSString, IESLiveScreencastAnchorMultiDeviceStateView, IESLiveScreencastMultiDeviceObject;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveScreencastAnchorMultiDeviceFragment : IESLiveRoomComponent <IESLiveScreencastMultiDeviceMessageDelegate, IESLiveScreencastMultiDeviceConnectDetailViewDelegate, IESLiveScreencastMultiDeviceConnectViewDelegate, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) IESLiveScreencastAnchorMultiDeviceStateView *deviceStateView;
@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) IESLiveScreencastMultiDeviceObject *deviceInfo;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (nonatomic) BOOL pushStreamSucceeded;
@property (nonatomic) BOOL isPauseLive;
@property (weak, nonatomic) id disconnectAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)willStopAnchorLive;
- (void)closeRoom;
- (void)didReceiveSourceMessage:(id)a0;
- (void)didReceiveSourceVideoData:(id)a0;
- (void)didReceiveSourceAudioData:(id)a0;
- (void)hidePop;
- (void)didReceiveSinkMessage:(id)a0;
- (void)showQrCodeView;
- (void)didClickHelp;
- (void)didPopConnectDetailView;
- (void)didDisConnect;
- (void)didSinkConnectionDeviceStateEvent:(id)a0;
- (void)didLiveStreamSessionStateStarted:(id)a0;
- (void)addMultiDeviceStateView;
- (void)passVideoEncoderParams;
- (void)didTapDeviceStateView;
- (void)didClickConnectDetailViewBack;
- (void)didClickConnectViewBack;
- (void).cxx_destruct;

@end
