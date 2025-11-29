@class NSString;

@interface MMListenUserInfoX : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uin;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImg;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *authIconUrl;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int authIconType;
@property (nonatomic) BOOL isMine;

+ (void)initialize;

@end
