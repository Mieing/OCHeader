@class BaseRequest, NSString;

@interface APNSReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *apnsjson;
@property (nonatomic) unsigned int receivedTimestamp;

+ (void)initialize;

@end
