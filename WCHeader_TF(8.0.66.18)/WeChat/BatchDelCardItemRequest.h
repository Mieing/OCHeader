@class BaseRequest, NSMutableArray;

@interface BatchDelCardItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *cardIds;

+ (void)initialize;

@end
