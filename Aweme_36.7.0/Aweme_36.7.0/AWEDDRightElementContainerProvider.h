@class AWEMultiElementContainer, AWEMultiElementContainerViewModel, NSString, AWEPageContext, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEDDRightElementContainerProvider : NSObject <AWERightElementContainerProvider>

@property (retain, nonatomic) AWEMultiElementContainer *elementContainer;
@property (retain, nonatomic) AWEMultiElementContainerViewModel *containerViewModel;
@property (weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *viewController;
@property (weak) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly, nonatomic) double containerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 context:(id)a1;
- (id)elementBuildStrategyIDs;
- (id)elementLayoutStrategyIDs;
- (id)container;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)containerView;
- (void)rebuild;

@end
