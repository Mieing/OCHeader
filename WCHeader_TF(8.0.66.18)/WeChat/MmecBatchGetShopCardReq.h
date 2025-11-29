@class BaseRequest, NSMutableArray;

@interface MmecBatchGetShopCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *shops;
@property (nonatomic) unsigned int reqType;

+ (void)initialize;

@end
