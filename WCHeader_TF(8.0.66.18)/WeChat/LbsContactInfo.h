@class NSString, SnsUserInfo, CustomizedInfo;

@interface LbsContactInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *distance;
@property (nonatomic) int sex;
@property (nonatomic) unsigned int imgStatus;
@property (nonatomic) unsigned int verifyFlag;
@property (retain, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) NSString *verifyContent;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSString *weibo;
@property (retain, nonatomic) NSString *weiboNickname;
@property (nonatomic) unsigned int weiboFlag;
@property (nonatomic) int headImgVersion;
@property (retain, nonatomic) SnsUserInfo *snsUserInfo;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *myBrandList;
@property (retain, nonatomic) CustomizedInfo *customizedInfo;
@property (retain, nonatomic) NSString *antispamTicket;
@property (nonatomic) unsigned int flag;
@property (nonatomic) unsigned int finderFlag;

+ (void)initialize;

@end
