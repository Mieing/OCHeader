@class MegaVideoBulletCommentInfo, BaseResponse;

@interface MegaVideoBulletCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MegaVideoBulletCommentInfo *comment;

+ (void)initialize;

@end
