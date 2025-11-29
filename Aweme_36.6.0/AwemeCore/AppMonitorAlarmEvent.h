@class NSLock, NSMutableDictionary;

@interface AppMonitorAlarmEvent : AppMonitorEvent

@property (nonatomic) long long successCount;
@property (nonatomic) long long failCount;
@property (retain, nonatomic) NSMutableDictionary *errorMsgDict;
@property (retain, nonatomic) NSMutableDictionary *errorCodeCountDict;
@property (retain, nonatomic) NSLock *lock;

- (void)incrSuccess;
- (void)incrFail;
- (void)addErrorWithErrorCode:(id)a0 errorMsg:(id)a1;
- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2;
- (id)jsonDict;
- (void).cxx_destruct;

@end
