@class NSMutableArray, BaseResponse;

@interface MMVisionRelatedWordResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) int secureRank;

+ (void)initialize;

@end
