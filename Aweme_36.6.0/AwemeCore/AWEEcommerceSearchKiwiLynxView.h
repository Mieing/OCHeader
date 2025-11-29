@class BDXBridgeEventSubscriber;

@interface AWEEcommerceSearchKiwiLynxView : AWEEcommerceSearchLynxBaseView

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ kiwiExpandBottomBlock;
@property (copy, nonatomic) id /* block */ lynxViewLoadFinished;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) BOOL isFromECommerce;

- (id)initWithShouldReuseLynxView:(BOOL)a0;
- (void)subscribeBridgeEvent;
- (void)unsubscribeBridgeEvent;
- (void)updateWithModel:(id)a0 logData:(id)a1 extraParams:(id)a2;
- (void)lynxEngineDidMount:(id)a0;
- (void)lynxEngineDidUpdate:(id)a0;
- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
