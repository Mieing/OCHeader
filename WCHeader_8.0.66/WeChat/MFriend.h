@class NSString, FBFriend, SnsUserInfo, CustomizedInfo;

@interface MFriend : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *mobileMd5;
@property (nonatomic) int sex;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) unsigned int personalCard;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) FBFriend *fbinfo;
@property (nonatomic) unsigned int albumFlag;
@property (nonatomic) unsigned int albumStyle;
@property (retain, nonatomic) NSString *albumBgimgId;
@property (retain, nonatomic) SnsUserInfo *snsUserInfo;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *myBrandList;
@property (retain, nonatomic) CustomizedInfo *customizedInfo;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *antispamTicket;

+ (void)initialize;

- (id)description;

@end
