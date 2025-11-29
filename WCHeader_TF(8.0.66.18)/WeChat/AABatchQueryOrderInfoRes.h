@class NSMutableArray, BaseResponse;

@interface AABatchQueryOrderInfoRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *orders;

+ (void)initialize;

@end
