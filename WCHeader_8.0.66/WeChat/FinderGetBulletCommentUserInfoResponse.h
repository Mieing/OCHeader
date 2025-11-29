@class BulletCommentUserInfo, BaseResponse;

@interface FinderGetBulletCommentUserInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BulletCommentUserInfo *userInfo;

+ (void)initialize;

@end
