@class NSMutableArray, BaseResponse;

@interface MMListenFeaturedCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *commentInfoList;

+ (void)initialize;

@end
