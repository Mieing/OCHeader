@class BaseRequest, NSMutableArray;

@interface FetchDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *fetchItem;

+ (void)initialize;

@end
