@class BaseRequest, NSString;

@interface TextStatusDataReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int schemaId;
@property (nonatomic) unsigned long long clientReportTimeMs;
@property (retain, nonatomic) NSString *json;

+ (void)initialize;

@end
