@interface FlowBootTrackerUtil : NSObject

+ (void)markDidFinishLaunch;
+ (BOOL)isColdLaunch;
+ (double)firstFrameDurationWithEnd:(double)a0;
+ (double)firstFeedDurationWithEnd:(double)a0;
+ (double)fromExecToLoadDuration;
+ (double)fromLoadTofinishLaunchDuration;
+ (double)fromDidFinishLaunchToWillConnectToSessionDuration;
+ (double)fromWillConnectToSessionToFrameDurationWithEnd:(double)a0;
+ (double)realStartTimestamp;
+ (BOOL)isFirstLaunchMarked;
+ (void)markMain;
+ (void)markWillFinishLaunch;
+ (void)markWillEnterForeground;
+ (void)markWillConnectToSession;
+ (BOOL)alreadyReportFeedShow;
+ (void)markPrivacyAlertAgree:(BOOL)a0;
+ (void)markLogin:(BOOL)a0;
+ (id)directFirstFrameParamsWithEnd:(double)a0 currentPage:(id)a1;
+ (void)load;
+ (BOOL)shouldReport;

@end
