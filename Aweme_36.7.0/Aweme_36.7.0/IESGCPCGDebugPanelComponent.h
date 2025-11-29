@class IESGCPCGDebugPanelResidentLynxView, IESGCPCGDebugPanelMenuLynxView, NSString, BDXBridgeEventSubscriber, IESGCPCGDebugDraggableView;

@interface IESGCPCGDebugPanelComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGLaunchProcessActions, IESGCPCGDebugPanelRouter>

@property (retain, nonatomic) IESGCPCGDebugPanelMenuLynxView *menuLynxView;
@property (retain, nonatomic) IESGCPCGDebugPanelResidentLynxView *residentLynxView;
@property (retain, nonatomic) IESGCPCGDebugDraggableView *draggableView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *debugSubscriber;
@property (retain, nonatomic) NSString *menuLynxSchema;
@property (retain, nonatomic) NSString *residentLynxSchema;
@property (nonatomic) BOOL isTargetOnExternalList;
@property (nonatomic) BOOL isTargetOnInternalList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 stageDidChangeFrom:(long long)a1 toStage:(long long)a2 info:(id)a3;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstance:(id)a0 didReceivePlayStats:(id)a1;
- (void)onInitProcessResult:(BOOL)a0 code:(long long)a1 errMsg:(id)a2 extraInfo:(id)a3;
- (void)componentDidAttached;
- (void)_registerAnnouncementEventSubscriber;
- (void)_onSelfClicked:(id)a0;
- (void)cacheResidentData:(id)a0 isShow:(BOOL)a1;
- (id)fetchResidentCache;
- (BOOL)isInWhitelist;
- (void)_unRegisterDebugEventSubscriber;
- (void)dismissDebugMenuPanel;
- (void)dismissDebugResidentPanel;
- (BOOL)evaluateDeviceAgainstWhitelist;
- (void)showDebugPanelIfNeeded;
- (void)handleGameContainerInformation;
- (void)handleExperienceInformation;
- (void)handleCommercialInfo;
- (id)createPerformanceParamsFromStatsModel:(id)a0;
- (void)sendDebugEventWithType:(id)a0 extra:(id)a1;
- (id)stringForSupplier:(unsigned long long)a0;
- (void)showDebugDraggableView;
- (void)showDebugResidentPanel;
- (void)showDebugMenuPanel;
- (void)showDebugPanel:(id)a0;
- (id)stringForCodecType:(long long)a0;
- (id)stringForNetworkQuality:(long long)a0;
- (void)dismissDebugDraggableView;
- (void).cxx_destruct;
- (id)stringForOrientation:(unsigned long long)a0;
- (id)init;
- (BOOL)isViewVisible:(id)a0;

@end
