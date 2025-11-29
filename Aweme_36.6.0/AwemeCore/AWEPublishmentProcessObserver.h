@class NSMutableArray;

@interface AWEPublishmentProcessObserver : NSObject

@property (retain, nonatomic) NSMutableArray *notificationTokens;

- (void)registerNotificationForName:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
