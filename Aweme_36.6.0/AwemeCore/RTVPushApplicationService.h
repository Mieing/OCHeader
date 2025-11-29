@class NSString, AWEIMComponentManager, RTVRootComponentContext;

@interface RTVPushApplicationService : RTVVoipBaseApplicationService <AWEIMComponentManagerDependency, AWEIMComponentContainer>

@property (retain) RTVRootComponentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (id)lazyComponentsNameWithContext:(id)a0;
- (void)rxAwakeFromPropertyInjection;
- (void)application:(id)a0 didCompleteLaunchWithOptions:(id)a1;
- (id)forwardingEventTarget;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)setupComponents;

@end
