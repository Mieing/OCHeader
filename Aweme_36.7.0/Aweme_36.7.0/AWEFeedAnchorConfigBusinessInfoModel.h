@class NSString, AWEPageContext;
@protocol AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionPanelDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate;

@interface AWEFeedAnchorConfigBusinessInfoModel : NSObject

@property (weak, nonatomic) id<AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (copy, nonatomic) NSString *referString;

- (void).cxx_destruct;

@end
