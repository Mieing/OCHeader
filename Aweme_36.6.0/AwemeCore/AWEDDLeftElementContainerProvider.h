@class AWEMultiElementContainer, AWEMultiElementContainerViewModel, NSArray, AWEPageContext, NSString, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEDDLeftElementContainerProvider : NSObject <AWELeftElementContainerProvider>

@property (retain, nonatomic) AWEMultiElementContainer *multiContainer;
@property (retain, nonatomic) AWEMultiElementContainerViewModel *containerViewModel;
@property (retain, nonatomic) NSArray *elementBuildStrategyIDs;
@property (weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly, nonatomic) double containerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 context:(id)a1;
- (id)elementLayoutStrategyIDs;
- (id)container;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)containerView;
- (void)rebuild;

@end
