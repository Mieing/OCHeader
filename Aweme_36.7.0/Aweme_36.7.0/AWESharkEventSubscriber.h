@class BDXBridgeEventSubscriber;

@interface AWESharkEventSubscriber : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *bdxSubscriber;
@property (copy, nonatomic) id /* block */ handler;

+ (id)subscriberWithHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)receiveEvent:(id)a0;

@end
