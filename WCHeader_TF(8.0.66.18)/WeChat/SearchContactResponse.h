@class CustomizedInfo, NSString, SKBuiltinString_t, SnsUserInfo, SKBuiltinBuffer_t, BaseResponse, SearchContactJumpInfo, NSMutableArray;

@interface SearchContactResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
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
@property (nonatomic) unsigned int contactCount;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) SKBuiltinBuffer_t *resBuf;
@property (retain, nonatomic) NSString *antispamTicket;
@property (retain, nonatomic) NSString *kfworkerId;
@property (nonatomic) unsigned int matchType;
@property (retain, nonatomic) NSString *popupInfoMsg;
@property (nonatomic) unsigned int openImcontactCount;
@property (retain, nonatomic) NSMutableArray *openImcontactList;
@property (nonatomic) unsigned int extFlag;
@property (retain, nonatomic) SearchContactJumpInfo *searchContactJumpInfo;

+ (void)initialize;

@end
