@class NSString, UIViewController, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionBaseContextProtocol;

@interface AWEPlayInteractionEnterFullPageGoodEvaluationRouter : NSObject <AWEPlayInteractionEnterFullPageRouterProtocol>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionViewControllerProtocol> *container;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionBaseContextProtocol, AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainer:(id)a0 context:(id)a1;
- (BOOL)shouldRouterWithParams:(id)a0;
- (void)executeRouterWithParams:(id)a0;
- (id)createTrackDataWithParams:(id)a0;
- (id)jointSchemaWithTrackData:(id)a0;
- (void).cxx_destruct;

@end
