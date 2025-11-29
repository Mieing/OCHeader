@class NSMutableArray, NSMutableDictionary, NSArray, NSLock;

@interface IESECLynxCardBridgeEventCenter : NSObject

@property (class, readonly, nonatomic) IESECLynxCardBridgeEventCenter *sharedCenter;

@property (retain, nonatomic) NSMutableDictionary *eventSubscribers;
@property (retain, nonatomic) NSLock *eventSubscribersLock;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (retain, nonatomic) NSLock *eventQueueLock;
@property (copy, nonatomic) NSArray *forbidStayEvent;
@property (copy, nonatomic) id /* block */ receiveBroadcastHandler;
@property (copy, nonatomic) NSArray *eventDenyList;
@property (nonatomic) double effectiveDuration;

- (void)publishEvent:(id)a0;
- (void)subscribeEventNamed:(id)a0 withSubscriber:(id)a1;
- (void)unsubscribeEventNamed:(id)a0 withSubscriber:(id)a1;
- (void)cleanExpiredEvent;
- (void)clearEvent:(id)a0 isSticky:(id)a1 timestampLower:(id)a2 timestampUpper:(id)a3;
- (void)cleanEventWith:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
