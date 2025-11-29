@class RecommendReasonWording, BaseResponse;

@interface FinderGetRecommendReasonHeaderResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) RecommendReasonWording *wording;

+ (void)initialize;

@end
