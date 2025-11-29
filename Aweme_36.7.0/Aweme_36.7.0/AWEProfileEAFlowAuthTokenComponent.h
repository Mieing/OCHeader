@class NSString;

@interface AWEProfileEAFlowAuthTokenComponent : AWEProfileEABaseController <AWEProfileEACardLifeCycleEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardDidClickAtIndexPath:(id)a0;
- (void)viewDidLoad;

@end
