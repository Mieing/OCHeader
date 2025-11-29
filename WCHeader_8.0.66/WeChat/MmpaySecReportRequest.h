@class BaseRequest, BaseEvent, NSString;

@interface MmpaySecReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) BaseEvent *baseEvent;
@property (nonatomic) unsigned long long uin;
@property (retain, nonatomic) NSString *oaid;
@property (nonatomic) unsigned long long reportTime;
@property (retain, nonatomic) NSString *reportData;
@property (retain, nonatomic) NSString *eventName;

+ (void)initialize;

@end
