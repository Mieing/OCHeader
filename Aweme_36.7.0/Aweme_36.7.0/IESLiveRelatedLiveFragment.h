@class IESLiveMultiCameraViewModel, NSString, IESLiveRelatedLivePanelManager, IESLiveLinkedRoomsStore, IESLiveMultiCameraStore, IESLiveGCDTimer, NSMutableArray, IESLiveRelatedLiveEntryManager;

@interface IESLiveRelatedLiveFragment : IESLiveRoomComponent <IESLiveAutoRotateAction, IESLiveMultiCameraProvider, HTSLiveStreamPlayerAction>

@property (retain, nonatomic) IESLiveRelatedLiveEntryManager *entryManager;
@property (retain, nonatomic) IESLiveRelatedLivePanelManager *panelManager;
@property (retain, nonatomic) IESLiveLinkedRoomsStore *linkedRoomsStore;
@property (retain, nonatomic) IESLiveMultiCameraStore *multiCameraStore;
@property (retain, nonatomic) IESLiveMultiCameraViewModel *multiCameraViewModel;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) long long panelCloseType;
@property (retain, nonatomic) NSMutableArray *cameraEntryHandlerArray;
@property (copy, nonatomic) id /* block */ changeCameraCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)handleOrientationChanged:(long long)a0;
- (void)addGesture;
- (void)streamPlayerDidReadyToRender;
- (void)onStreamError;
- (unsigned long long)currentPanelType;
- (void)updateMultiCameraInfoNeedTrack:(BOOL)a0 trackParameters:(id)a1 completion:(id /* block */)a2;
- (void)openMultiCameraListPanelIfNeed;
- (void)openMultiCameraCommonList;
- (id)multiCameraCommonListView;
- (void)registerEntryHandler:(id)a0;
- (void)unregisterEntryHandler:(id)a0;
- (void)changeCameraTo:(id)a0 callBack:(id /* block */)a1;
- (void)changeCameraTo:(id)a0 callBack:(id /* block */)a1 source:(long long)a2;
- (void)changeCameraToID:(id)a0 callBack:(id /* block */)a1;
- (void)changeCameraToIndex:(long long)a0 callBack:(id /* block */)a1;
- (void)changeCameraToIndex:(long long)a0 callBack:(id /* block */)a1 source:(long long)a2;
- (void)changeCameraToNextCallBack:(id /* block */)a0;
- (void)changeCameraToNextCallBack:(id /* block */)a0 source:(long long)a1;
- (void)changeCameraToMainCallBack:(id /* block */)a0;
- (long long)currentCameraIndex;
- (void)bindBlocks;
- (void)openRelatedLivePanelWithType:(long long)a0;
- (id)currentCameraEntryHandler;
- (void)delayToAutoClostPanel:(double)a0;
- (void)cancelAutoOpenTimer;
- (void)trackMultiCameraPanelShowWithType:(long long)a0;
- (void)trackMultiCameraPanelCloseWithType:(long long)a0;
- (void)closeRelatedLivePanelWithType:(long long)a0;
- (id)findMainCamera;
- (void)p_addUgcParams:(id)a0;
- (void)handleMultiCameraEntryUpdateVisible:(BOOL)a0 callBack:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (BOOL)gestureShouldBegin:(id)a0;

@end
