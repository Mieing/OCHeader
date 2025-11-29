@interface IESLiveBoxingSubscriberUtil : IESLiveSubscriberUtil

+ (id)subscriberUtilForIdentifier:(id)a0;
+ (id)boxingSubscriberUtil;

- (void)setEnable:(BOOL)a0 withSubscriber:(id)a1;
- (void)enumerateEnabledSubscribersUsingBlock:(id /* block */)a0;
- (id)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
