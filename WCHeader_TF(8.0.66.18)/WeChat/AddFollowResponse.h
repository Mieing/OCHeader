@class NSMutableArray, BaseResponse;

@interface AddFollowResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *follows;

+ (void)initialize;

@end
