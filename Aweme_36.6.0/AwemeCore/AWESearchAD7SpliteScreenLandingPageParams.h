@class AWEAwemeModel;
@protocol AWEAwemePlayInteractionPanelControllerProtocol, AWEPlayInteractionPanelManagerProtocol, AWEAwemeNewDetailTableContainerProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWESearchAD7SpliteScreenLandingPageParams : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelInteraction;
@property (weak, nonatomic) id<AWEPlayInteractionPanelManagerProtocol> panelManager;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) id<AWEAwemeNewDetailTableContainerProtocol> container;

- (void).cxx_destruct;

@end
