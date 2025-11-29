@class AWEElementContainer, NSString, AWEPageContext, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEDefaultLeftElementContainerProvider : NSObject <AWELeftElementContainerProvider>

@property (retain, nonatomic) AWEElementContainer *container;
@property (weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly, nonatomic) double containerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)initWithViewController:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)layout;
- (id)containerView;
- (void)rebuild;

@end
