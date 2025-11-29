@class IESLiveGameOpenPlatformNotificationQueue, NSString, NSLock, NSMutableArray;

@interface IESLiveGameOpenPlatformNotificationCenter : NSObject

@property (retain, nonatomic) IESLiveGameOpenPlatformNotificationQueue *queue;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ dispatchBlock;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *messageTypes;

+ (id)notificationCenterWithName:(id)a0;

- (id)attachingDIContext;
- (void)startObservingMessage:(Class)a0;
- (void)stopObservingMessage:(Class)a0;
- (id)notificationWithMessage:(id)a0;
- (void)startObservingMessage;
- (void)stopObservingMessage;
- (void)fetchLatestNotificationUsingBlock:(id /* block */)a0;
- (void)stopFetchingNotification;
- (void)invokeDispatchBlock:(id)a0;
- (void)dispatchNotificationIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
