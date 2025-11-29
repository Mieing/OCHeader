@class NSObject;
@protocol BDXBridgeContainerProtocol;

@interface AWEKefuBridgeEventPublisher : NSObject

@property (retain, nonatomic) NSObject<BDXBridgeContainerProtocol> *bridgeContainer;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)initWithBridgeContainer:(id)a0;
- (void).cxx_destruct;

@end
