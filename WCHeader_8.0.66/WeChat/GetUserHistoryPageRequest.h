@class BaseRequest, NSString;

@interface GetUserHistoryPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;

+ (void)initialize;

@end
