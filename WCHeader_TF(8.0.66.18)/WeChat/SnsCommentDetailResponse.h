@class NSMutableArray, BaseResponse;

@interface SnsCommentDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int contentResultsCount;
@property (retain, nonatomic) NSMutableArray *contentResults;

+ (void)initialize;

@end
