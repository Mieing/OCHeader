@class NSString;

@interface AWELiveViewControllerTransitionServiceImpl : NSObject <IESLiveViewControllerTransitionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewController:(id)a0 shouldStartInteractiveTranstionBlock:(id /* block */)a1;
- (void)setupViewController:(id)a0 shouldStartInteractiveTranstionWithGestureBlock:(id /* block */)a1;

@end
