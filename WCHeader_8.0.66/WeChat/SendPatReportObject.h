@class SendPatWrap;

@interface SendPatReportObject : NSObject

@property (weak, nonatomic) SendPatWrap *sendPatWrap;
@property (nonatomic) unsigned long long patTime;
@property (nonatomic) unsigned long long timeInterval;
@property (nonatomic) int errorCode;
@property (nonatomic) unsigned long long patIndex;
@property (nonatomic) BOOL createNewChat;
@property (nonatomic) unsigned long long revokeType;
@property (nonatomic) BOOL exposeSetSuffixEducation;

- (void)prepareReport;
- (void)reportFromHitFrequencyLimit;
- (void)reportFromServerReturn:(int)a0;
- (void)reportFromCancelSendingRevokeAction:(unsigned long long)a0;
- (void)reportFromReturnCode:(int)a0 reportType:(unsigned long long)a1 andRevokeAction:(unsigned long long)a2;
- (void).cxx_destruct;

@end
