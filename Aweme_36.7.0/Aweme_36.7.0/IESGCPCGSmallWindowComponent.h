@class IESGCPTimer, NSString, IESGCPCGSmallWindowService;

@interface IESGCPCGSmallWindowComponent : IESGCPCGInstanceBaseComponent <IESGCPCGContainerActions, IESGCPCGSmallWindowRouter>

@property (retain, nonatomic) IESGCPCGSmallWindowService *smallWindowService;
@property (retain, nonatomic) IESGCPTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)containerWillAppear;
- (void)containerDidAppear;
- (void)containerDidDisappear;
- (void)didSetGameCPDIContext;
- (void)_invalidTimer;
- (void)componentDidAttached;
- (void)containerDidDismissed;
- (void)containerDidBindInstance:(id)a0;
- (BOOL)isVoiceOn;
- (void)switchVideoIsOn:(BOOL)a0;
- (void)switchVoiceIsOn:(BOOL)a0;
- (void)switchStreamResolutionType:(id)a0;
- (BOOL)_isContainerShowing;
- (void)_setupSmallWindowService;
- (void)_updateSmallVideoStateByService;
- (long long)windowState;
- (void).cxx_destruct;
- (BOOL)isVideoOn;

@end
