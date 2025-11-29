@class BaseRequest, NSString, MMListenReportClientInfo;

@interface MMListenSubscribeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isCancel;
@property (retain, nonatomic) MMListenReportClientInfo *reportClientInfo;

+ (void)initialize;

@end
