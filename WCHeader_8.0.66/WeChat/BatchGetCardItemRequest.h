@class BaseRequest, NSMutableArray;

@interface BatchGetCardItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *cardIds;

+ (void)initialize;

@end
