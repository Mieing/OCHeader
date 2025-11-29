@class IESGCPBaseContainer;

@interface IESGCPContainerBaseViewController : UIViewController

@property (retain, nonatomic) IESGCPBaseContainer *container;

- (id)initWithScene:(long long)a0 parentDIContext:(id)a1;
- (void)createContainerWithScene:(long long)a0 parentDIContext:(id)a1;
- (void)destroyDIAndWidgets;
- (void).cxx_destruct;
- (void)dealloc;

@end
