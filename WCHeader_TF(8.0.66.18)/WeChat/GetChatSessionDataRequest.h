@class BaseRequest, NSMutableArray;

@interface GetChatSessionDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *sessionIdList;

+ (void)initialize;

@end
