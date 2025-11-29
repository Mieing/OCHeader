@class BaseRequest, NSString, VoipStatReportData;

@interface VoipShutDownReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (retain, nonatomic) VoipStatReportData *reportData;
@property (nonatomic) unsigned long long timestamp64;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int intervalAfterCall;

+ (void)initialize;

@end
