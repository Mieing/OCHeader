@class BaseRequest, NSString;

@interface ReportHBReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) int reportType;
@property (retain, nonatomic) NSString *sendUserName;
@property (retain, nonatomic) NSString *recvUserName;

+ (void)initialize;

@end
