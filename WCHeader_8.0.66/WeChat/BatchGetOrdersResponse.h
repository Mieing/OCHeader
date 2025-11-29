@class NSMutableArray, BaseResponse;

@interface BatchGetOrdersResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *orders;

+ (void)initialize;

@end
