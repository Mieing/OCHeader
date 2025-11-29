@class BaseRequest, NSMutableArray;

@interface VoipCSReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (retain, nonatomic) NSMutableArray *data;

+ (void)initialize;

@end
