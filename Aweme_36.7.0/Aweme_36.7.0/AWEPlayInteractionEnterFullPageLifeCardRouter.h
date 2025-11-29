@class NSString, UIViewController, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionBaseContextProtocol;

@interface AWEPlayInteractionEnterFullPageLifeCardRouter : NSObject <AWEPlayInteractionEnterFullPageRouterProtocol>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionViewControllerProtocol> *container;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionBaseContextProtocol, AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
