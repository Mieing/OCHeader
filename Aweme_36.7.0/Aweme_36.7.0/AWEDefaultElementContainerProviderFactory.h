@class NSString, UIViewController, AWEPageContext;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEDefaultElementContainerProviderFactory : NSObject <AWEPlayInteractionElementContainerProviderFactory>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 context:(id)a1;
- (id)buildProviders;
- (void).cxx_destruct;

@end
