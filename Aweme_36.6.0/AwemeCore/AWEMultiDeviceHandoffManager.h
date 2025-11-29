@class NSString, NSUserActivity;

@interface AWEMultiDeviceHandoffManager : NSObject <NSUserActivityDelegate>

@property (retain, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) NSString *timerIdentify;
@property (retain, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)cancelHandoffWithTimeout;
- (void)beginHandoffWithUrl:(id)a0;
- (void).cxx_destruct;
- (void)userActivityWillSave:(id)a0;
- (void)userActivityWasContinued:(id)a0;

@end
