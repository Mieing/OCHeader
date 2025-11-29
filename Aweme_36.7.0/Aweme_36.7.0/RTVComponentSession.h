@class AWEIMComponentManager, NSString, RTVComponentContext, RTVVoipModel, RTVVoipViewsController;
@protocol RTVVoipContextManagerInterface;

@interface RTVComponentSession : NSObject <AWEIMComponentManagerDependency, AWEIMComponentContainer, RTVVoipObserver>

@property (retain) RTVComponentContext *context;
@property (retain) RTVVoipModel *voip;
@property (readonly, weak, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, weak, nonatomic) RTVVoipViewsController *viewsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (id)lazyComponentsNameWithContext:(id)a0;
- (void)voipServiceDidFinish:(id)a0 voip:(id)a1;
- (void)setupComponents:(id)a0;
- (void)onComponentDidBindSession:(id)a0;
- (void)onContextWillDealloc;
- (void)onComponentWillBindSession;
- (void)p_deallocProtected;
- (void)p_addVoipModelKVO:(id)a0;
- (id)forwardingEventTarget;
- (void)bindSession:(id)a0 injectorController:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
