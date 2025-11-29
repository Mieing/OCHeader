@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEPlayInteractionViewControllerProtocol, AWECommerceComponentContext;

@interface AWEAdRelatedSearchManager : NSObject <AWEAdRelatedSearchManager, AWECommerceComponentProtocol>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;
@property (nonatomic) double currentWatchTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)setConnectionWithInteractionViewController:(id)a0 model:(id)a1;
- (void)addHandlerByInteractionContext;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;

@end
