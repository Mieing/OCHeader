@class NSString, OpenIMContactCustomInfo;

@interface OpenIMContact : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tpUsername;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *remark;
@property (retain, nonatomic) NSString *bigHeadimg;
@property (retain, nonatomic) NSString *smallHeadimg;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *nicknamePyinit;
@property (retain, nonatomic) NSString *nicknameQuanpin;
@property (retain, nonatomic) NSString *remarkPyinit;
@property (retain, nonatomic) NSString *remarkQuanpin;
@property (retain, nonatomic) OpenIMContactCustomInfo *customInfo;
@property (retain, nonatomic) NSString *antispamTicket;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int sex;
@property (retain, nonatomic) NSString *descWordingId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long flag;
@property (retain, nonatomic) NSString *addChatroomSceneNewxml;
@property (retain, nonatomic) NSString *exposedId;
@property (nonatomic) unsigned long long type2;
@property (nonatomic) unsigned int enterpriseAuthStatus;

+ (void)initialize;

@end
