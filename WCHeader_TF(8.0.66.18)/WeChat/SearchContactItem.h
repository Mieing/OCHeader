@class NSString, SKBuiltinString_t, SnsUserInfo, CustomizedInfo, SKBuiltinBuffer_t;

@interface SearchContactItem : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinString_t *userName;
@property (retain, nonatomic) SKBuiltinString_t *nickName;
@property (retain, nonatomic) SKBuiltinString_t *pyinitial;
@property (retain, nonatomic) SKBuiltinString_t *quanPin;
@property (nonatomic) int sex;
@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuf;
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
@property (nonatomic) int albumStyle;
@property (nonatomic) int albumFlag;
@property (retain, nonatomic) NSString *albumBgimgId;
@property (retain, nonatomic) SnsUserInfo *snsUserInfo;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *myBrandList;
@property (retain, nonatomic) CustomizedInfo *customizedInfo;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *antispamTicket;
@property (nonatomic) unsigned int matchType;

+ (void)initialize;

@end
