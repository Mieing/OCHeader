@class NSString;

@interface IESGCPCGPlayerControlComponent : IESGCPCGInstanceBaseComponent <IESGCPCGContainerActions, IESGCPCGInstanceActions, IESGCPCGPlayerControlRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playIfNeeded;
- (void)containerWillAppear;
- (void)containerWillDisappear;
- (void)containerDidAppear;
- (void)containerDidDisappear;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (id)serviceBindingProtocols;
- (id)multiBindingProtocols;
- (void)containerDidBindInstance:(id)a0;
- (void)_addObserverOnWillAppear;
- (void)_removeObserverOnWillDisappear;
- (BOOL)isShowing;
- (void)_willEnterForegroundNotification:(id)a0;
- (void)_didEnterBackgroundNotification:(id)a0;
- (void)_playIfNeeded;

@end
