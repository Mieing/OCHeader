@class AWEElementContainer, NSString, AWEPageContext, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEDefaultRightElementContainerProvider : NSObject <AWERightElementContainerProvider>

@property (retain, nonatomic) AWEElementContainer *container;
@property (weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly, nonatomic) double containerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)layout;
- (id)containerView;
- (void)rebuild;

@end
