@class NSString, SKBuiltinString_t, CustomizedInfoNew;

@interface SearchOrRecommendItemNew : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinString_t *userName;
@property (retain, nonatomic) SKBuiltinString_t *nickName;
@property (nonatomic) int sex;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) unsigned int personalCard;
@property (nonatomic) unsigned int verifyFlag;
@property (retain, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) NSString *weibo;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSString *weiboNickname;
@property (nonatomic) unsigned int weiboFlag;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) CustomizedInfoNew *customizedInfo;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;

+ (void)initialize;

@end
