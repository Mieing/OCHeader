@class SECEventCenter;

@interface SECHybridEventCenter : NSObject

@property (retain, nonatomic) SECEventCenter *eventCenter;

+ (id)sharedCenter;

- (void)publishEvent:(id)a0;
- (void)registerSubscriber:(id)a0 forEventType:(id)a1;
- (void)registerSubscriberForAllEventType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
