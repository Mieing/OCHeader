@class UIViewController, AWEAwemeModel;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEPlayVideoDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerNewProtocol, AWEAwemePlayInteractionCommerceDelegate, IESVideoPlayerDelegate, AWEPlayVideoViewControllerStatusDelegate, AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionBizControllerProtocol;

@interface HunterMediaModel : NSObject

@property (weak, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayVideoDelegate> playerDelegate;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerNewProtocol> interactionNewDelegate;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionBizControllerProtocol> interactionDelegate;
@property (weak, nonatomic) id<IESVideoPlayerDelegate> videoPlayerDelegate;
@property (weak, nonatomic) id<AWEPlayVideoViewControllerStatusDelegate> statusDelegate;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionPanelDelegate> *interactionController;

- (void).cxx_destruct;

@end
