@class AWEAntiAddictRemindLaterModel;

@interface AWEAntiAddictConfig : NSObject

@property BOOL isMaskShowing;
@property BOOL isHalfAlertShowing;
@property BOOL isTimeLockShowing;
@property (retain) AWEAntiAddictRemindLaterModel *sleepRemindLaterModel;

+ (id)defaultRestMaskMainTitle;
+ (id)defaultRestMaskSubTitle;
+ (id)defaultSleepMaskMainTitle;
+ (id)defaultSleepMaskSubTitle;
+ (id)defaultRestMaskEnterText;
+ (id)defaultSleepMaskEnterText;
+ (id)defaultRestMaskExitText;
+ (id)defaultSleepMaskExitText;
+ (id)defaultSleepMaskLaterRemindText;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
