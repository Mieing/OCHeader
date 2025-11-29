@class NSString;

@interface AppMonitorRawAlarmEvent : AppMonitorEvent <AppMonitorRawEventProtocol>

@property (nonatomic) long long successCount;
@property (nonatomic) long long failCount;
@property (retain, nonatomic) NSString *errorCode;
@property (retain, nonatomic) NSString *errorMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseRawUTMsg:(id)a0;

- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2;
- (void)setSuccess;
- (void)setFailWithErrorCode:(id)a0 errorMsg:(id)a1;
- (id)dumpToUTEvent;
- (void).cxx_destruct;

@end
