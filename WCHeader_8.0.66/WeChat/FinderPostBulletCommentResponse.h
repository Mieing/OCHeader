@class BulletCommentInfo, BaseResponse;

@interface FinderPostBulletCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BulletCommentInfo *comment;

+ (void)initialize;

@end
