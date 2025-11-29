@class NSString, SKBuiltinString_t;

@interface MemberResp : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinString_t *memberName;
@property (nonatomic) unsigned int memberStatus;
@property (retain, nonatomic) SKBuiltinString_t *nickName;
@property (retain, nonatomic) SKBuiltinString_t *pyinitial;
@property (retain, nonatomic) SKBuiltinString_t *quanPin;
@property (nonatomic) int sex;
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
@property (retain, nonatomic) NSString *country;

+ (void)initialize;

@end
