@class BaseRequest, NSString;

@interface ModAvatarReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int avatarId;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *oriAvatarurl;

+ (void)initialize;

@end
