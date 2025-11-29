@class NSString, FinderBizInfo_BizAuthInfo;

@interface FinderBizInfo_BizInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *bizNickname;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) unsigned int bizUin;
@property (nonatomic) unsigned int friendFollowCount;
@property (retain, nonatomic) FinderBizInfo_BizAuthInfo *authInfo;
@property (retain, nonatomic) NSString *serviceTypeName;

+ (void)initialize;

- (void)setServiceTypeName:(id)a0;
- (id)serviceTypeName;
- (void)setAuthInfo:(id)a0;
- (id)authInfo;
- (void)setFriendFollowCount:(unsigned int)a0;
- (unsigned int)friendFollowCount;
- (void)setBizUin:(unsigned int)a0;
- (unsigned int)bizUin;
- (void)setHeadImgUrl:(id)a0;
- (id)headImgUrl;
- (void)setBizNickname:(id)a0;
- (id)bizNickname;
- (void)setBizUsername:(id)a0;
- (id)bizUsername;

@end
