@class BaseResponse;

@interface TextStatusGetSelfInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int likedCount;
@property (nonatomic) int liveMemberCount;
@property (nonatomic) int referencedCount;

+ (void)initialize;

@end
