@class BaseRequest, NSMutableArray;

@interface MmecBatchGetProductCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *products;
@property (nonatomic) unsigned int reqType;

+ (void)initialize;

@end
