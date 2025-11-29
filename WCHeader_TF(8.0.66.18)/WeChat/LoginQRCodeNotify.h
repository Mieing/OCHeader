@class NSString;

@interface LoginQRCodeNotify : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *pwd;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) unsigned int pushLoginUrlexpiredTime;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *authUrl;

+ (void)initialize;

@end
