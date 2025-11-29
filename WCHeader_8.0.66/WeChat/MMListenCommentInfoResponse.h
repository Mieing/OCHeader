@class NSMutableArray, BaseResponse;

@interface MMListenCommentInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;

+ (void)initialize;

@end
