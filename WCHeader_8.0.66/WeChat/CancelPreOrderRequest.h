@class BaseRequest, NSMutableArray, NSString;

@interface CancelPreOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int productCount;
@property (retain, nonatomic) NSMutableArray *product;
@property (retain, nonatomic) NSString *lockId;

+ (void)initialize;

@end
