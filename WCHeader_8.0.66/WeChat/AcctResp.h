@class NSString, AcctExtInfo, IamBizBaseResponse;

@interface AcctResp : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseResponse *baseResponse;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headimgurl;
@property (retain, nonatomic) AcctExtInfo *extInfo;
@property (nonatomic) BOOL initFlag;
@property (nonatomic) unsigned int banType;
@property (retain, nonatomic) NSString *banUrl;
@property (nonatomic) BOOL interactiveIdentity;
@property (nonatomic) unsigned int verifyFlag;

+ (void)initialize;

- (void)setVerifyFlag:(unsigned int)a0;
- (unsigned int)verifyFlag;
- (void)setInteractiveIdentity:(BOOL)a0;
- (BOOL)interactiveIdentity;
- (void)setBanUrl:(id)a0;
- (id)banUrl;
- (void)setBanType:(unsigned int)a0;
- (unsigned int)banType;
- (void)setInitFlag:(BOOL)a0;
- (BOOL)initFlag;
- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setHeadimgurl:(id)a0;
- (id)headimgurl;
- (void)setNickname:(id)a0;
- (id)nickname;
- (void)setUsername:(id)a0;
- (id)username;
- (void)setBiz:(id)a0;
- (id)biz;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
