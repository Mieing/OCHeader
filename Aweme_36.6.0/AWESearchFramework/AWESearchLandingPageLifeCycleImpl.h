@class NSString, UIPanGestureRecognizer;
@protocol BDXContainerProtocol;

@interface AWESearchLandingPageLifeCycleImpl : NSObject <UIGestureRecognizerDelegate, BDXContainerLifecycleProtocol>

@property (nonatomic) double enterTime;
@property (retain, nonatomic) UIPanGestureRecognizer *contentPanGesture;
@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createServiceWithURL:(id)a0;

- (void)containerDidCreated:(id)a0 view:(id)a1;
- (void)containerWillDestory:(id)a0;
- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)containerVCViewDidAppear:(id)a0;
- (void)containerDidClose:(id)a0;
- (id)schemeParamsWithContainer:(id)a0;
- (void)contentDidScroll:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
