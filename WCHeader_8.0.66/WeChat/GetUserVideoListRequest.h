@class BaseRequest, NSString;

@interface GetUserVideoListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) NSString *checkHasNewTicket;

+ (void)initialize;

@end
