@class BaseResponse, NSData, RecommendReasonWording, NSMutableArray;

@interface FinderGetRecommendReasonStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) RecommendReasonWording *wording;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
