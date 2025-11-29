@class BaseRequest, NSString;

@interface ReportDistributeStainIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *promoteId;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
