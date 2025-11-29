@class UIView, NSString, DeviceViewInfo, HTSLiveDeviceViewInfo, HTSLiveToolbarItem, IESLiveAnchorDirectorDeviceStatusView, IESLiveCameraDirectorApi, IESLiveAnchorDirectorStreamHandler;

@interface IESLiveAnchorDirectorDeviceConnectFragment : IESLiveRoomComponent <IESLiveAnchorDirectorDeviceListViewDelegate, IESLiveAnchorDirectorDeviceSearchViewDelegate, HTSLiveMessageSubscriber, IESLiveAnchorDirectorService, IESLiveAnchorDirectorStreamDelegate, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) IESLiveAnchorDirectorDeviceStatusView *deviceStatusView;
@property (retain, nonatomic) HTSLiveToolbarItem *directorItem;
@property (retain, nonatomic) IESLiveAnchorDirectorStreamHandler *streamHandler;
@property (retain, nonatomic) IESLiveCameraDirectorApi *api;
@property (retain, nonatomic) DeviceViewInfo *anchorDeviceInfo;
@property (retain, nonatomic) UIView *directorBackView;
@property (nonatomic) BOOL isStartDirectorLive;
@property (retain, nonatomic) UIView *sessionViewContainer;
@property (retain, nonatomic) UIView *preView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultPreviewFrame;
@property (nonatomic) BOOL isInteractiveSessionSuc;
@property (nonatomic) BOOL needShowListPanel;
@property (nonatomic) long long currentViewId;
@property (retain, nonatomic) HTSLiveDeviceViewInfo *msgCurrentDeviceView;
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
- (BOOL)isDirectorStartLive;
- (void)setupToolbarItem;
- (void)stopInteractDirector;
- (void)trackDeviceSearchViewShow:(id)a0 isFromToolBarItemClick:(BOOL)a1 isFromControlPage:(BOOL)a2;
- (void)deviceStatusViewClicked;
- (void)trackTopDirectorStatusView:(BOOL)a0;
- (void)trackListPanelItem:(id)a0 isClick:(BOOL)a1 clickName:(id)a2 isFromToolBarItemClick:(BOOL)a3 deviceCount:(long long)a4;
- (void)handleShowDeviceViewList:(BOOL)a0 isFromToolBarItemClick:(BOOL)a1 isFromControlPage:(BOOL)a2;
- (void)trackDirectorItem:(BOOL)a0;
- (void)showDeviceSearchView:(id)a0 isFromToolBarItemClick:(BOOL)a1 isFromControlPage:(BOOL)a2;
- (void)showDeviceListView:(id)a0 isFromToolBarItemClick:(BOOL)a1;
- (void)handleFetchDeviceViewList:(BOOL)a0 completion:(id /* block */)a1;
- (void)handleNetError:(id)a0;
- (void)switchMultiView:(id)a0 currentViewId:(long long)a1 currentRtcId:(id)a2 isFromRevertLive:(BOOL)a3;
- (void)addCameraPreviewFromLinkMicID:(id)a0 isSwitchAnchorView:(BOOL)a1;
- (void)showDeviceStatusView:(id)a0;
- (void)disConnectAllDirectorDevice:(BOOL)a0 targetInfo:(id)a1;
- (void)handleConnectedMessage:(id)a0;
- (void)handleDisConnectedMessage:(id)a0;
- (BOOL)needHideAndDismissPopupItem;
- (void)trackConnectSusToast;
- (void)removeDeviceStatusView;
- (void)cleanDirectorBackView:(BOOL)a0;
- (void)disConnectDirectorDevice:(id)a0 deviceData:(id)a1 needSwitchToAnchorView:(BOOL)a2;
- (void)trackPopView:(id)a0 isClick:(BOOL)a1 isFromToolBarItemClick:(BOOL)a2 isDisconnectAll:(BOOL)a3 isClickCancel:(BOOL)a4;
- (void)trackSearchPanelItem:(id)a0 isClick:(BOOL)a1 isFromToolBarItemClick:(BOOL)a2 isFromControlPage:(BOOL)a3;
- (void)didSelectedDisConnectDevice:(id)a0 deviceData:(id)a1 listView:(id)a2;
- (void)trackSearchPanelClickSearchButton:(id)a0 isFromToolBarItemClick:(BOOL)a1 isFromControlPage:(BOOL)a2;
- (id)directorViewWithLinkmicId:(id)a0;
- (id)deviceSearchViewStatus:(id)a0;
- (void)didSelectedDirectorDevice:(id)a0 deviceData:(id)a1 listView:(id)a2;
- (void)didSelectedAddDevice:(id)a0 deviceData:(id)a1;
- (void)didSelectedDisConnectAllDevice:(id)a0 listView:(id)a1;
- (void)selectedDirectorDevice:(id)a0 info:(id)a1 completion:(id /* block */)a2;
- (void)selectedDisConnectDevice:(id)a0 info:(id)a1 deviceData:(id)a2;
- (void)selectedSearchDevice:(id)a0 deviceData:(id)a1;
- (void)searchItemDisplayOnce:(id)a0 deviceData:(id)a1;
- (void)directorDidPushedStream;
- (void)directorDidSessionReady:(id)a0;
- (void)directorDidDisconnected:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
