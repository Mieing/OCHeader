@class BaseRequest, NSString;

@interface BizCommReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *reqJson;

+ (void)initialize;

@end
