@class NSString, NSObject;

@interface HMDNotificationConnection : NSObject

@property (readonly, weak, nonatomic) NSObject *observer;
@property (readonly, nonatomic) void *observerPtr;
@property (readonly, nonatomic) unsigned long long observerSize;
@property (readonly, nonatomic) SEL selector;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) NSObject *object;
@property (nonatomic) Class observerClass;
@property (nonatomic) Class objectClass;
@property (readonly, nonatomic, getter=isActived) BOOL actived;
@property (readonly, nonatomic, getter=isCrashed) BOOL crashed;

- (void)receiveNotification:(id)a0;
- (void)deactive;
- (id)initWithObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)active;
- (BOOL)valid;
- (void).cxx_destruct;
- (void)dealloc;

@end
