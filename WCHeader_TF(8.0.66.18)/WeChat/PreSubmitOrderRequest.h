@class BaseRequest, NSMutableArray;

@interface PreSubmitOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int productCount;
@property (retain, nonatomic) NSMutableArray *product;
@property (nonatomic) unsigned int fromScene;

+ (void)initialize;

@end
