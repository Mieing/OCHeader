@class NSString, MMListenUserInfo;

@interface MMListenRecommendInfo_User : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uin;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headimg;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) MMListenUserInfo *userInfo;
@property (nonatomic) BOOL isAppreciated;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL isLike;
@property (retain, nonatomic) NSString *hashusername;

+ (void)initialize;

@end
