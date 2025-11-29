@class NSString, NSTimer, IESLivePlayerTrafficMonitorV2DataModel, IESLivePlayerController;
@protocol IESLivePlayerTrafficMonitorV2Delegate;

@interface IESLivePlayerTrafficMonitorV2 : NSObject

@property (retain, nonatomic) IESLivePlayerTrafficMonitorV2DataModel *dataUsageModel;
@property (retain, nonatomic) NSTimer *eventReportTimer;
@property (nonatomic) long long latestNetworkState;
@property (nonatomic) BOOL isInBackground;
@property (retain, nonatomic) NSString *sessionID;
@property (weak, nonatomic) id<IESLivePlayerTrafficMonitorV2Delegate> delegate;
@property (weak, nonatomic) IESLivePlayerController *player;

+ (BOOL)enableNewTrafficReport;
+ (double)p_newTrafficReportTimeInterval;
+ (double)p_enableNewTrafficReportToTea;
+ (double)p_useNewWayToReportSlardar;

- (void)stopRecord;
- (void)startRecord;
- (void)p_onReportTimer;
- (void)p_onNetworkStateDidChange;
- (void)p_onDidEnterBackground;
- (void)p_onWillEnterForeground;
- (id)p_buildScene;
- (void)p_doReportForReason:(id)a0 scene:(id)a1;
- (void)p_calculate;
- (unsigned long long)p_calculatePlayerScene;
- (void).cxx_destruct;
- (void)p_addObservers;

@end
