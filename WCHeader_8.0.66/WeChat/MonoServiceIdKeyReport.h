@interface MonoServiceIdKeyReport : NSObject

+ (void)reportId:(int)a0 Key:(int)a1;
+ (void)msgInQueue;
+ (void)notificationShow;
+ (void)notificationClose;
+ (void)vibrationOutApp;
+ (void)vibrationInApp;
+ (void)delegateCancelNotExist;
+ (void)delegateStartNotExist;
+ (void)delegateRejectNotExist;
+ (void)logicMsgOutdate;
+ (void)logicCheckingServer;
+ (void)logicCancelUI;
+ (void)logicStartUI;
+ (void)logicRejectMsg;
+ (void)logicUIWorkingWaitNextCheck;
+ (void)SysSettingCloseSound;
+ (void)SysSettingCloseAlert;

@end
