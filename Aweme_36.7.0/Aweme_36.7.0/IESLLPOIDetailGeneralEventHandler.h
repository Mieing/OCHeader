@class UIViewController, LLDitoPageContext;

@interface IESLLPOIDetailGeneralEventHandler : NSObject

@property (weak, nonatomic) UIViewController *baseViewController;
@property (weak, nonatomic) LLDitoPageContext *context;

- (void)iesll_rx_store:(id)a0 didSetWithModule:(id)a1;
- (id)poiDetail;
- (id)constData;
- (void)p_bindActionAndState;
- (void)p_gotoMapViewController;
- (void)p_createVideoWithContext:(id)a0;
- (void).cxx_destruct;
- (id)store;
- (id)initWithBaseViewController:(id)a0;

@end
