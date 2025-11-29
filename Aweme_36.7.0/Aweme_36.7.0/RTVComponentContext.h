@class RTVComponentSession, RTVVoipSession, RTVVoipModel;
@protocol RxInjector, RTVXRControllerInjector;

@interface RTVComponentContext : AWEIMComponentContext

@property (weak) RTVComponentSession *componentSession;
@property (weak) RTVVoipSession *session;
@property (weak) id<RTVXRControllerInjector> controllerInjector;
@property (retain) RTVVoipModel *voip;
@property (readonly, weak) id<RxInjector> injector;

+ (id)currentContext:(id)a0;

- (id)initWithVoip:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
