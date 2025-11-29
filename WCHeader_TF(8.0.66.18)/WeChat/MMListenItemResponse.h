@class NSMutableArray, BaseResponse;

@interface MMListenItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;

+ (void)initialize;

@end
