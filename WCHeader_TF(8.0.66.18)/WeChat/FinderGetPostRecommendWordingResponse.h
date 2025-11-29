@class NSData, FinderGetPostRecommendTitleResult, BaseResponse;

@interface FinderGetPostRecommendWordingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *seqBuffer;
@property (retain, nonatomic) FinderGetPostRecommendTitleResult *titleResult;

+ (void)initialize;

@end
