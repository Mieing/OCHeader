@class NSArray, _TtC9FlowUIKit26FlowInnerNotificationQueue;

@interface FlowUIKit.FlowInnerNotificationQueue : NSObject {
    void /* function */ innerNotifications;
}

@property (class, nonatomic, readonly) _TtC9FlowUIKit26FlowInnerNotificationQueue *default;

@property (nonatomic, copy) NSArray *innerNotifications;
@property (nonatomic) long long maxInnerNotificationsOnScreenSimultaneously;
@property (nonatomic) BOOL activeAnimation;
@property (nonatomic, readonly) long long numberOfInnerNotifications;

- (id)initWithMaxInnerNotificationsOnScreenSimultaneously:(long long)a0;
- (void)addInnerNotification:(id)a0;
- (void)removeAllInnerNotificationWithNotificationName:(id)a0;
- (void)removeInnerNotification:(id)a0;
- (void)showNextWithCallback:(id /* block */)a0;
- (id)firstNotDisplayedInnerNotification;
- (void)dismissAllForced;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;

@end
