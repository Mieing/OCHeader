@class VoIPMtUserInfo, BaseRequest, NSString, NSMutableArray;

@interface VoIPMtReportLogRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) NSString *sdkGroupid;
@property (retain, nonatomic) VoIPMtUserInfo *fromUser;
@property (retain, nonatomic) NSMutableArray *logList;

+ (void)initialize;

@end
