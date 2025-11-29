@class NSString, UIViewController, UIView;
@protocol AWENearbyHalfScreenContainerProtocol;

@interface AWENearbyHalfScreenTopLineViewInjector : NSObject <AWENearbyHalfScreenInjectedViewProtocol>

@property (weak, nonatomic) UIViewController<AWENearbyHalfScreenContainerProtocol> *targetVC;
@property (weak, nonatomic) UIView *injectedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetVC:(id)a0;
- (void)willBecomeFullScreen:(id)a0 targetVC:(id)a1;
- (void)didBecomeFullScreen:(id)a0 targetVC:(id)a1;
- (void)didAddContentView:(id)a0 targetVC:(id)a1;
- (void).cxx_destruct;

@end
