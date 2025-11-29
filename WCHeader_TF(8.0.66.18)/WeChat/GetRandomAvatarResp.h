@class NSString, BaseResponse;

@interface GetRandomAvatarResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatarurl;
@property (retain, nonatomic) NSString *fileid;

+ (void)initialize;

@end
