@class NSString;

@interface AWEHPNewVersionFeedbackController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hpTopTabDidSelectToIndex:(long long)a0 previousIndex:(long long)a1;
- (void)addNewVersionFeedbackView;
- (void)hideNewVersionFeedbackViewToIndex:(long long)a0;
- (void)viewDidLoad;

@end
