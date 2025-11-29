@class NSMutableArray, BaseResponse;

@interface GetWeRunFollowerListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recentLikeUsers;
@property (retain, nonatomic) NSMutableArray *followers;

+ (void)initialize;

@end
