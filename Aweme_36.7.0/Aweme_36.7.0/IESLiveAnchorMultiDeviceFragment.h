@class IESLiveMultiDeviceObject, NSString, IESLivePopupItem, IESLiveResolutionApi, IESLiveAnchorMultiDeviceStateView;
@protocol IESLiveAnchorDynamicClarityPreferenceService, IESLiveURLSchemaHandler;

@interface IESLiveAnchorMultiDeviceFragment : IESLiveRoomComponent <IESLiveMultiDeviceMessageDelegate, IESLiveGuideActions, IESLiveMultiDeviceConnectViewDelegate>

@property (retain, nonatomic) IESLiveAnchorMultiDeviceStateView *deviceStateView;
@property (retain, nonatomic) IESLivePopupItem *popDisItem;
@property (retain, nonatomic) IESLivePopupItem *qrCodeDisItem;
@property (retain, nonatomic) IESLivePopupItem *detailViewItem;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (nonatomic) BOOL isUseSourceCamera;
@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) IESLiveResolutionApi *resolutionApi;
@property (copy, nonatomic) NSString *pushStreamQuality;
@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (retain, nonatomic) IESLiveMultiDeviceObject *deviceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)updatePushStreamConfig:(id)a0 type:(id)a1;
- (void)didReceiveSourceMessage:(id)a0;
- (void)changeClarityInfoInPushInfo:(id)a0 isCameraChange:(BOOL)a1;
- (void)addConnectView;
- (void)didSinkConnectionStateEvent:(id)a0;
- (void)hidePop;
- (void)trackMultiDeviceLiveAbnormalDisconnectWithEvent:(id)a0 area:(id)a1;
- (void)openConnectViewPop;
- (void)trackMultiDeviceLiveEventWithRoom:(id)a0;
- (void)showClarityChangeToast:(id)a0 isCameraChange:(BOOL)a1;
- (void)didReceiveSinkMessage:(id)a0;
- (void)showQrCodeView;
- (void)didClickHelp;
- (void)showDetailView;
- (BOOL)sinkUseSourceCamera;
- (void).cxx_destruct;

@end
