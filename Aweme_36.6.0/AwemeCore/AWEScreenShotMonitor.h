@interface AWEScreenShotMonitor : NSObject

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
+ (void)setup;

- (void)didTakeScreenShotNotification:(id)a0;
- (void)logWindowAndStatusbarInfoWithWindow:(id)a0;
- (id)init;

@end
