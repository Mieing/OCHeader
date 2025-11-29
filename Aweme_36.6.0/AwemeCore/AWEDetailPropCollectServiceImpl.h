@class NSString, AWEDetailPropViewModel, IESServiceProvider, UIViewController;

@interface AWEDetailPropCollectServiceImpl : NSObject <AWEDetailCollectService>

@property (weak, nonatomic) UIViewController *host;
@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (nonatomic) BOOL animatingNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHost:(id)a0 serviceProvider:(id)a1;
- (void)collectWithActionSender:(id)a0;
- (void)p_handleToastTipAnimationWithCollectStatus:(BOOL)a0 eventSender:(id)a1 propModel:(id)a2;
- (void)p_handleCollectError:(id)a0;
- (void).cxx_destruct;

@end
