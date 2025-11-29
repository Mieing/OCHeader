@class BaseRequest, NSString;

@interface GetWeappBoxReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *queryJson;

+ (void)initialize;

@end
