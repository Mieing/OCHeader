@class NSString, SnsUserInfo, CustomizedInfo, SKBuiltinBuffer_t;

@interface ShakeGetItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *distance;
@property (nonatomic) int sex;
@property (nonatomic) unsigned int imgStatus;
@property (nonatomic) unsigned int hasHdimg;
@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuffer;
@property (nonatomic) unsigned int numDistance;
@property (retain, nonatomic) NSString *weibo;
@property (retain, nonatomic) NSString *weiboNickname;
@property (nonatomic) unsigned int weiboFlag;
@property (nonatomic) unsigned int verifyFlag;
@property (retain, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) NSString *verifyContent;
@property (nonatomic) int headImgVersion;
@property (retain, nonatomic) SnsUserInfo *snsUserInfo;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *myBrandList;
@property (retain, nonatomic) CustomizedInfo *customizedInfo;
@property (retain, nonatomic) NSString *antispamTicket;

+ (void)initialize;

@end
