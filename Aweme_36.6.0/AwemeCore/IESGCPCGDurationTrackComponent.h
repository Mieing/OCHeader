@class NSString;

@interface IESGCPCGDurationTrackComponent : IESGCPCGInstanceBaseComponent <IESGCPCGContainerActions, IESGCPCGInstanceActions>

@property (nonatomic) BOOL isDurationTracking;
@property (nonatomic) long long startPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)containerDidAppear;
- (void)containerDidDisappear;
- (void)_appDidBecomeActive;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 didReceivePlayStats:(id)a1;
- (void)componentDidAttached;
- (void)containerDidBindInstance:(id)a0;
- (void)containerDidUnbindInstance:(id)a0;
- (void)_appWillResignActive;
- (void)_endDurationTrackIfNeeded;
- (void)_startDurationTrackIfNeeded;
- (id)init;

@end
