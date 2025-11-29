@class NSLock, NSHashTable;

@interface IESLiveSubscriberUtil : NSObject

@property (retain, nonatomic) NSHashTable *hashTable;
@property (retain, nonatomic) NSLock *lock;

+ (id)weakObjectsSubscriberUtil;
+ (id)strongObjectsSubscriberUtil;
+ (void)removeSubscriberUtilForIdentifier:(id)a0;
+ (id)subscriberUtilForIdentifier:(id)a0;

- (void)enumerateSubscribersUsingBlock:(id /* block */)a0;
- (void)removeAllSubscribers;
- (id)initWithHashTableType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
