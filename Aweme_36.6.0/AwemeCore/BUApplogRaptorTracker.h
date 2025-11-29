@class NSLock, NSMutableArray, NSMutableDictionary;

@interface BUApplogRaptorTracker : BURaptorTracker

@property (nonatomic) long long willSaveCount;
@property (nonatomic) long long saveSuccessCount;
@property (nonatomic) long long saveFailCount;
@property (nonatomic) long long didSaveCount;
@property (nonatomic) long long willSendCount;
@property (nonatomic) long long didSendCount;
@property (nonatomic) long long sendSuccessValidCount;
@property (nonatomic) long long sendSuccessInvalidCount;
@property (nonatomic) long long sendFailCount;
@property (nonatomic) long long haveSendResultCount;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long requestSuccessCount;
@property (nonatomic) long long requestFailCount;
@property (nonatomic) long long sdkSendSuccessCount;
@property (retain, nonatomic) NSMutableArray *willSaveArray;
@property (retain, nonatomic) NSMutableArray *saveSuccessArray;
@property (retain, nonatomic) NSMutableArray *willSendArray;
@property (retain, nonatomic) NSMutableArray *sendSuccessValidArray;
@property (retain, nonatomic) NSLock *extraInfoLock;
@property (retain, nonatomic) NSMutableDictionary *labelCountDict;

+ (id)sharedInstance;

- (void)_pbu_setMutDict:(id)a0 key:(id)a1 modelArray:(id)a2 needReqid:(BOOL)a3;
- (void)_pbu_reset;
- (void)_pbu_report_stats_monitorIfNeed;
- (void)_pbu_insertExtraInfo_eventWillSaveWithModel:(id)a0;
- (void)_pbu_insertIntoArray:(id)a0 modelArray:(id)a1 needReqid:(BOOL)a2 logid:(id)a3;
- (BOOL)checkDeviceIdChanged;
- (BOOL)checkForceLanguageChanged;
- (id)_v1DictWithOriginV1Dict:(id)a0 isDoubleSend:(BOOL)a1;
- (id)_v3DictWithOriginV1Dict:(id)a0 isDoubleSend:(BOOL)a1;
- (void)_pbu_setMutDict:(id)a0 key:(id)a1 modelArray:(id)a2;
- (void)eventWillSaveWithModel:(id)a0;
- (void)eventDidSaveSuccessWithModel:(id)a0;
- (void)eventDidSaveFailedWithModel:(id)a0 error:(id)a1;
- (void)eventDidSaveWithModel:(id)a0;
- (void)eventDidSendSuccessWithModelArray:(id)a0 valid:(BOOL)a1 logid:(id)a2;
- (void)eventDidSendFailedWithModelArray:(id)a0 error:(id)a1;
- (void)eventHaveSendResultWithModelArray:(id)a0;
- (id)extraInfoBeforeSendWithIsStationClick:(BOOL)a0;
- (void)eventWillSendWithModelArray:(id)a0;
- (void)eventDidSendWithModelArray:(id)a0;
- (void)_pbu_inUnknown_sendWithPostDict:(id)a0 completionHandler:(id /* block */)a1;
- (long long)raptorTrackerType;
- (Class)raptorModelClass;
- (id)willCleanNotificationName;
- (id)didCleanNotificationName;
- (id)sentNotificationName;
- (void).cxx_destruct;
- (id)init;
- (id)eventKey;

@end
