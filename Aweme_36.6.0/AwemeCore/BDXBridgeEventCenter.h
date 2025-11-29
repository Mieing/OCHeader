@class NSMutableDictionary, NSMutableArray, NSLock;
@protocol NSLocking;

@interface BDXBridgeEventCenter : NSObject

@property (class, readonly, nonatomic) BDXBridgeEventCenter *sharedCenter;

@property (retain, nonatomic) NSMutableDictionary *eventSubscribers;
@property (retain, nonatomic) id<NSLocking> eventSubscribersLock;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (retain, nonatomic) NSLock *eventQueueLock;
@property (copy, nonatomic) id /* block */ receiveBroadcastHandler;
@property (nonatomic) double effectiveDuration;

- (void)publishEvent:(id)a0;
- (void)subscribeEventNamed:(id)a0 withSubscriber:(id)a1;
- (void)unsubscribeEventNamed:(id)a0 withSubscriber:(id)a1;
- (void)cleanExpiredEvent;
- (BOOL)isSubscriber:(id)a0 inSubscribers:(id)a1;
- (id)keyForTarget:(id)a0;
- (id)keyForTarget:(id)a0;
- (void)poi_subscribeEventNamed:(id)a0 withTarget:(id)a1 callback:(id /* block */)a2;
- (void)poi_unsubscribeWithTarget:(id)a0;
- (void)poi_unsubscribeEventNamed:(id)a0 withTarget:(id)a1;
- (void)iesll_poi_subscribeEventNamed:(id)a0 withTarget:(id)a1 callback:(id /* block */)a2;
- (void)iesll_poi_unsubscribeEventNamed:(id)a0 withTarget:(id)a1;
- (void)iesll_poi_unsubscribeWithTarget:(id)a0;
- (void)setTargets:(id)a0;
- (void)setTargets:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)targets;
- (id)targets;

@end
