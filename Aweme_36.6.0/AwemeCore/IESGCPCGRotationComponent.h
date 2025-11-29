@class NSLock, NSMutableArray, NSString;

@interface IESGCPCGRotationComponent : IESGCPCGInstanceBaseComponent <IESGCPCGContainerActions, IESGCPCGRotationRouter, IESGCPCGInstanceActions, IESGCPXPlayGameScreenRotateInterface>

@property (nonatomic) BOOL sticky;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *rotations;
@property (nonatomic) long long currentGameOrientation;
@property (nonatomic) double deviceRotationTimestamp;
@property (nonatomic) BOOL showFullScreenBtnBeforeEnterXPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)containerWillAppear;
- (void)containerDidAppear;
- (void)forceUpdateToOrientationPortrait:(id /* block */)a0;
- (void)rotationToGameOrientation:(id /* block */)a0;
- (void)playInstance:(id)a0 remoteVideoRotationChanged:(long long)a1;
- (void)stickOrientation:(long long)a0 completion:(id /* block */)a1;
- (void)stickInterfaceOrientation:(long long)a0 completion:(id /* block */)a1;
- (void)releaseOrientationStickyWithCompletion:(id /* block */)a0;
- (void)rotateToOrientation:(long long)a0 completion:(id /* block */)a1;
- (id)serviceBindingProtocols;
- (id)multiBindingProtocols;
- (void)componentDidAttached;
- (void)containerWillMoveToViewStackInPresent:(BOOL)a0;
- (void)containerWillDismissedInPresent:(BOOL)a0;
- (void)containerDidDismissed;
- (void)containerDidBindInstance:(id)a0;
- (void)_addDeviceOrientationChangeNoti;
- (void)_removeDeviceOrientationChangeNoti;
- (void)_setNeedsRestoreOrientationWithCompletion:(id /* block */)a0;
- (void)_doUpdateToOrientation:(long long)a0 completion:(id /* block */)a1;
- (long long)xplayOrientationFromInterfaceOrientation:(long long)a0;
- (void)_preventLiveRoomAutoRotateIfNeeded;
- (void)_restoreLiveRoomAutoRotateIfNeeded;
- (void)_requestRotate:(long long)a0 msg:(id)a1 completion:(id /* block */)a2;
- (long long)xplayOrientationFromDeviceOrientation:(long long)a0;
- (void)_passiveRotateForIPadTo:(long long)a0;
- (void)_passiveRotateForIPhoneTo:(long long)a0;
- (BOOL)_currentGameOrientationIsLandscape;
- (void)_consumeRotationIfNeeded;
- (long long)orientationFromXPlayOrientation:(long long)a0;
- (void)onDeviceOrientationChanged;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
