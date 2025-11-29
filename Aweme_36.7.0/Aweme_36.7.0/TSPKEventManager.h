@class NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKEventManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *registerSubscibers;
@property (retain, nonatomic) id<TSPKLock> lock;

+ (void)registerSubsciber:(id)a0 onEventType:(unsigned long long)a1;
+ (void)registerSubsciber:(id)a0 onEventId:(id)a1;
+ (void)registerSubsciber:(id)a0 onEventType:(unsigned long long)a1 apiType:(id)a2;
+ (void)unregisterSubsciber:(id)a0 onEventId:(id)a1;
+ (void)unregisterSubsciber:(id)a0 onEventType:(unsigned long long)a1 apiType:(id)a2;
+ (void)unregisterSubscribersWithJudgeBlock:(id /* block */)a0;
+ (id)getHandleResultFromSubscibers:(id)a0 event:(id)a1;
+ (void)registerSubsciber:(id)a0 onEventType:(unsigned long long)a1 apiTypes:(id)a2;
+ (void)unregisterSubsciber:(id)a0 onEventType:(unsigned long long)a1;
+ (void)unregisterSubsciber:(id)a0 onEventType:(unsigned long long)a1 apiTypes:(id)a2;
+ (id)dispatchEvent:(id)a0;
+ (id)sharedManager;

- (void)registerSubsciber:(id)a0 onEventId:(id)a1;
- (id)subscribersOnEventId:(id)a0;
- (void)unregisterSubsciber:(id)a0 onEventId:(id)a1;
- (void)unregisterSubscribersWithJudgeBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
