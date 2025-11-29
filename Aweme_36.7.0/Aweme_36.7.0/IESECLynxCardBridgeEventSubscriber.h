@class HybridLynxView, NSString;

@interface IESECLynxCardBridgeEventSubscriber : NSObject

@property (weak, nonatomic) HybridLynxView *container;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *eventId;
@property (nonatomic) BOOL shouldFilterEvent;
@property (copy, nonatomic) NSString *listContextId;
@property (nonatomic) BOOL breakEventDispatch;

+ (id)subscriberWithCallback:(id /* block */)a0;
+ (id)subscriberWithEventId:(id)a0 callback:(id /* block */)a1;
+ (id)subscriberWithContainer:(id)a0 timestamp:(double)a1;

- (void).cxx_destruct;
- (BOOL)receiveEvent:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
