@class BaseRequest, NSString;

@interface GameReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int timeStamp;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int opStatus;
@property (retain, nonatomic) NSString *openId;
@property (retain, nonatomic) NSString *customJson;

+ (void)initialize;

@end
