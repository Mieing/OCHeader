@class NSDictionary, AWEAwemeModel;
@protocol AWEAwemePlayInteractionPanelControllerProtocol, AWEAwemeNewDetailTableContainerProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEIMMessageFloatNewContainerParams : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelInteraction;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) id<AWEAwemeNewDetailTableContainerProtocol> container;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double heightRatio;
@property (nonatomic) double keyboardShowHeightRatio;
@property (nonatomic) BOOL keyboardShowSwitch;

- (void).cxx_destruct;

@end
