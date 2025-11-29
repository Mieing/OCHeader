@class NSMutableArray, BaseResponse;

@interface GetStepListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *steps;

+ (void)initialize;

@end
