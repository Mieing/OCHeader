@class BDXBridgeEventSubscriber, AWEGrouponLynxContainerView;

@interface AWEGrouponDynamicEventSubscriber : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *bdxSubscriber;
@property (weak, nonatomic) AWEGrouponLynxContainerView *lynxContainer;
@property (copy, nonatomic) id /* block */ handler;

+ (id)subscriberWithContainer:(id)a0;
+ (id)subscriberWithHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)receiveEvent:(id)a0;

@end
