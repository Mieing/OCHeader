@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDPolicyEventCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) NSMutableDictionary *registerSubscribers;
@property (retain, nonatomic) NSMutableArray *allEventSubscribers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;

+ (id)identifierForSubscriber:(id)a0 eventType:(id)a1;
+ (id)sharedInstance;

- (void)addSubscriberForAllEvent:(id)a0;
- (void)addSubscriber:(id)a0 forEventType:(id)a1;
- (void)addSubscriber:(id)a0 forEventTypes:(id)a1;
- (void)_addSubscriber:(id)a0 forEventTypes:(id)a1;
- (void)_removeSubscriber:(id)a0 forEventType:(id)a1;
- (void)_removeAllSubscribers;
- (void)removeSubscriber:(id)a0 forEventType:(id)a1;
- (void)removeAllSubscribers;
- (void)dispatchEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_dispatchEvent:(id)a0;

@end
