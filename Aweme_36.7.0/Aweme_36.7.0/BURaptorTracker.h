@class BUTimer, NSDateFormatter, NSString, NSOperationQueue, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BURaptorTracker : NSObject <BURaptorTrackerNetworkOperationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseSerialQueue;
@property (nonatomic) long long failedCount;
@property (retain, nonatomic) NSDate *nextAvailableDate;
@property (retain, nonatomic) NSMutableArray *waitingArray;
@property (retain, nonatomic) NSOperationQueue *networkOperationQueue;
@property (nonatomic) long long networkSendIndex;
@property (nonatomic) BOOL needReportDelay;
@property (retain, nonatomic) BUTimer *needReportDelayTimer;
@property (retain) NSDate *lastReportDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logSerialQueue;
@property (nonatomic) long long sdkEventIndex;
@property (nonatomic) long long sdkEventValidIndex;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_pbu_set_sessionId;
+ (void)setupRaptorTrack;
+ (id)sharedInstance;
+ (id)sessionId;

- (void)eventData:(id)a0;
- (void)_pbu_inDB_saveData:(id)a0;
- (void)_pbu_inDB_updateNeedReportDelay:(BOOL)a0;
- (void)_log_needReportDelay_withMessage:(id)a0;
- (void)_pbu_inDB_stopTimer;
- (void)_pbu_timerAction;
- (void)updateNeedReportDelay:(BOOL)a0;
- (void)_logWithMessage:(id)a0 queueType:(long long)a1 subType:(long long)a2;
- (void)eventWillSaveWithModel:(id)a0;
- (void)eventDidSaveSuccessWithModel:(id)a0;
- (void)eventDidSaveFailedWithModel:(id)a0 error:(id)a1;
- (void)eventDidSaveWithModel:(id)a0;
- (void)_pbu_inDB_maybeSendWhenSaveSuccessWithModel:(id)a0;
- (long long)adlog_batch;
- (long long)adlog_interval;
- (BOOL)_pbu_inDB_checkWhenSaveSuccessWithModelArray:(id)a0 model:(id)a1;
- (long long)adlog_exception_batch;
- (void)_pbu_inDB_addSendTaskWithModelArray:(id)a0 maxBatchCount:(long long)a1;
- (void)_pbu_inDB_deleteWithModelArray:(id)a0;
- (void)_pbu_inDB_updateWithModelArray:(id)a0 sendingStatus:(BOOL)a1;
- (void)_pbu_inDB_addOperationWithModelArray:(id)a0;
- (void)eventDidSendSuccessWithModelArray:(id)a0 valid:(BOOL)a1 logid:(id)a2;
- (void)eventDidSendFailedWithModelArray:(id)a0 error:(id)a1;
- (void)eventHaveSendResultWithModelArray:(id)a0;
- (void)_pbu_inDB_maybeSendWhenAppWillEnterForeground;
- (id)extraInfoBeforeSendWithIsStationClick:(BOOL)a0;
- (void)eventWillSendWithModelArray:(id)a0;
- (void)_pbu_st_inMain_postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)_pbu_inDB_handleWithOperation:(id)a0 request:(id)a1 modelArray:(id)a2;
- (void)eventDidSendWithModelArray:(id)a0;
- (void)_pbu_inDB_startTimer;
- (void)_pbu_inDB_deleteExpiredData;
- (void)_pbu_inDB_updateAllSendingStatusWhenSDKInit;
- (void)_pbu_inDB_maybeSendWhenSDKInit;
- (void)operation:(id)a0 sendWithModelArray:(id)a1 completionHandler:(id /* block */)a2;
- (id)_debugInfoWithModelArray:(id)a0;
- (long long)adlog_data_type;
- (void)_pbu_inUnknown_sendWithPostDict:(id)a0 completionHandler:(id /* block */)a1;
- (long long)raptorTrackerType;
- (Class)raptorModelClass;
- (id)willCleanNotificationName;
- (id)didCleanNotificationName;
- (id)sentNotificationName;
- (void).cxx_destruct;
- (id)init;
- (id)eventKey;
- (void)setup;
- (void)applicationWillEnterForegroundNotification:(id)a0;

@end
