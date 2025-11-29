@class BaseResponse;

@interface FinderUniCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long commentId;

+ (void)initialize;

@end
