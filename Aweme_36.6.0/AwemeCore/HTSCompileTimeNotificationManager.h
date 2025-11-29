@class NSMutableDictionary;

@interface HTSCompileTimeNotificationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *subscribers;

+ (id)sharedManager;

- (void)loadCompileNotifications;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
