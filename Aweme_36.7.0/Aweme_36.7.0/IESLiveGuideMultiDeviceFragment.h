@class IESLiveMultiDeviceObject, NSString, UIAlertController, IESLivePopupItem, IESLiveGuideToolBarItem;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveGuideMultiDeviceFragment : IESLiveGuideComponent <IESLiveGuideOpenLiveAdditionalEvent, IESLiveMultiDeviceMessageDelegate, IESMultiDeviceChooseTypeContainerViewDelegate, IESLiveMultiDeviceConnectViewDelegate, IESLiveMultiDeviceConnectDetailViewDelegate>

@property (retain, nonatomic) IESLiveGuideToolBarItem *multiDeviceItem;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) IESLivePopupItem *qrPopupItem;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) IESLivePopupItem *disConnectItem;
@property (retain, nonatomic) IESLivePopupItem *connectingItem;
@property (retain, nonatomic) UIAlertController *pcConnectController;
@property (retain, nonatomic) IESLiveMultiDeviceObject *deviceObject;
@property (retain, nonatomic) NSString *deviceSinkQrString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)componentUnmount;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (id)trackClickParams:(id)a0;
- (void)didReceiveSourceMessage:(id)a0;
- (void)hidePop;
- (void)trackMultiDeviceLiveAbnormalDisconnectWithEvent:(id)a0 area:(id)a1;
- (void)openConnectViewPop;
- (void)showClarityChangeToast:(id)a0 isCameraChange:(BOOL)a1;
- (void)didReceiveSinkMessage:(id)a0;
- (void)showQrCodeView;
- (void)didClickHelp;
- (void)didStartWithSdkTypeNotification:(id)a0;
- (void)didSinkDeviceStateEvent:(id)a0;
- (void)didPopConnectDetailView;
- (void)trackMultiDeviceLiveModeOverEvent:(id)a0;
- (void)didDisConnect;
- (void)didDeviceConnectEvent;
- (void)didCancelDeviceConnectEvent;
- (void).cxx_destruct;

@end
