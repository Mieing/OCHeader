@interface IESLivePublicScreenNotificationCenterV2 : IESLivePublicScreenNotificationCenter

@property (nonatomic) BOOL enableOrderSubscribe;

- (id)initWithDIContext:(id)a0;
- (void)addSubscriber:(id)a0 forEvent:(id)a1;
- (void)notifyObserversForEvent:(id)a0 block:(id /* block */)a1;
- (void)mergeObservers:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
