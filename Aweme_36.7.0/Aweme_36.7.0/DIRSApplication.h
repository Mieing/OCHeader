@class NSString;

@interface DIRSApplication : NSObject

@property (copy, nonatomic) NSString *launchID;
@property (nonatomic) double launchTime;
@property (nonatomic) long long applicationState;

+ (id)sharedApplication;

- (void)_updateApplicationState;
- (id)_notificationiSelMapping;
- (void)_observeNotifications;
- (void).cxx_destruct;
- (id)init;
- (void)commonInit;
- (void)_notify:(id)a0;

@end
