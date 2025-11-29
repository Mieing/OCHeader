@class IESLiveScreencastMultiDeviceObject, NSString, IESLivePopupItem, IESLiveGuideToolBarItem;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveScreencastMultiDeviceGuideFragment : IESLiveGuideComponent <IESLiveScreencastMultiDeviceConnectViewDelegate, IESLiveScreencastMultiDeviceConnectDetailViewDelegate, IESLiveScreencastMultiDeviceMessageDelegate, IESLiveGuideOpenLiveAdditionalEvent>

@property (retain, nonatomic) IESLiveGuideToolBarItem *multiDeviceItem;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) IESLivePopupItem *qrPopupItem;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) IESLiveScreencastMultiDeviceObject *deviceObject;
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
- (void)appendLiveActionTrackParams:(id)a0 completion:(id /* block */)a1;
- (id)trackClickParams:(id)a0;
- (void)didReceiveSourceMessage:(id)a0;
- (void)hidePop;
- (void)didReceiveSinkMessage:(id)a0;
- (void)showQrCodeView;
- (void)didClickHelp;
- (void)didStartWithSdkTypeNotification:(id)a0;
- (void)didPopConnectDetailView;
- (void)didDisConnect;
- (void)guideToolBarDidClicked;
- (void)didSinkConnectionDeviceStateEvent:(id)a0;
- (void)didClickConnectDetailViewBack;
- (void)didClickConnectViewBack;
- (void).cxx_destruct;

@end
