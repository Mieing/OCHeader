@class BaseRequest, NSString, NSMutableArray;

@interface BatchGetOrdersRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *sessionUsername;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
