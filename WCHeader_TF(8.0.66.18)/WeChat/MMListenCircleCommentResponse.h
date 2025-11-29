@class NSMutableArray, BaseResponse;

@interface MMListenCircleCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *friendLikeList;
@property (retain, nonatomic) NSMutableArray *friendCommentList;

+ (void)initialize;

@end
