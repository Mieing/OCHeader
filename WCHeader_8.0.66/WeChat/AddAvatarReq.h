@class BaseRequest, NSString, NSData;

@interface AddAvatarReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSData *headimgdata;
@property (retain, nonatomic) NSString *fileid;
@property (nonatomic) unsigned int headimgflag;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
