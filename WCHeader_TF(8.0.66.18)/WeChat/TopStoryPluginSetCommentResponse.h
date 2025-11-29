@class NSString, BaseResponse;

@interface TopStoryPluginSetCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL hasDeleteComment;

+ (void)initialize;

@end
