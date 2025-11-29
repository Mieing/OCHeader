@interface AWEBackgroundFetchOptManager : NSObject

+ (id)optConfig;
+ (void)excuteOpt;
+ (void)recoverNotificationIfNeeded;

@end
