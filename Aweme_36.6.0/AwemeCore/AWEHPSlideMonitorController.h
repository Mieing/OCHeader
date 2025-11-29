@class NSString;

@interface AWEHPSlideMonitorController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidAppear;
- (void)viewWillDisappear;

@end
