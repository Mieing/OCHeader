@class NSString, BaseResponse;

@interface TopStoryPluginPostCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *commentId;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
