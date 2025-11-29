@class NSString;

@interface AWEHPAnchorTemplateDetailPageController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hpRefreshPanGestureRecognizerShouldBegin:(id)a0 reason:(id *)a1;

@end
