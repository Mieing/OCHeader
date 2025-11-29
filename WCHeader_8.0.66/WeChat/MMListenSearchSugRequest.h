@class BaseRequest, NSString, MMListenReportClientInfo;

@interface MMListenSearchSugRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *sugId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) MMListenReportClientInfo *reportClientInfo;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
