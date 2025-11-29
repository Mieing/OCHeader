@class BaseRequest, NSMutableArray;

@interface BatchRecordWxaTemplateMsgEventRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *events;

+ (void)initialize;

@end
