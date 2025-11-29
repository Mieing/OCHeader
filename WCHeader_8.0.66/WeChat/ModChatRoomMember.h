@class NSString, SKBuiltinString_t, SnsUserInfo, CustomizedInfo, SKBuiltinBuffer_t;

@interface ModChatRoomMember : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinString_t *userName;
@property (retain, nonatomic) SKBuiltinString_t *nickName;
@property (retain, nonatomic) SKBuiltinString_t *pyinitial;
@property (retain, nonatomic) SKBuiltinString_t *quanPin;
@property (nonatomic) int sex;
@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuf;
@property (nonatomic) unsigned int imgFlag;
@property (retain, nonatomic) SKBuiltinString_t *remark;
@property (retain, nonatomic) SKBuiltinString_t *remarkPyinitial;
@property (retain, nonatomic) SKBuiltinString_t *remarkQuanPin;
@property (nonatomic) unsigned int contactType;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) unsigned int personalCard;
@property (nonatomic) unsigned int verifyFlag;
@property (retain, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) NSString *weibo;
@property (retain, nonatomic) NSString *verifyContent;
@property (retain, nonatomic) NSString *weiboNickname;
@property (nonatomic) unsigned int weiboFlag;
@property (nonatomic) int albumStyle;
@property (nonatomic) int albumFlag;
@property (retain, nonatomic) NSString *albumBgimgId;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) SnsUserInfo *snsUserInfo;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *myBrandList;
@property (retain, nonatomic) CustomizedInfo *customizedInfo;

+ (void)initialize;

@end
