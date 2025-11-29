@class NSString, NSMutableArray, NSData;

@interface GetA8KeyLiteRespInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int requestId;
@property (retain, nonatomic) NSString *respUrl;
@property (retain, nonatomic) NSString *shareUrl;
@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *antiSpamTicket;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *menuWording;
@property (nonatomic) unsigned int authBits;
@property (nonatomic) unsigned int antiSpamBits;
@property (nonatomic) unsigned int domainLevelInterval;
@property (retain, nonatomic) NSMutableArray *httpHeader;
@property (retain, nonatomic) NSData *jsapiControlBytes;

+ (void)initialize;

- (void)setJsapiControlBytes:(id)a0;
- (id)jsapiControlBytes;
- (void)setHttpHeader:(id)a0;
- (id)httpHeader;
- (void)setDomainLevelInterval:(unsigned int)a0;
- (unsigned int)domainLevelInterval;
- (void)setAntiSpamBits:(unsigned int)a0;
- (unsigned int)antiSpamBits;
- (void)setAuthBits:(unsigned int)a0;
- (unsigned int)authBits;
- (void)setMenuWording:(id)a0;
- (id)menuWording;
- (void)setHeadImg:(id)a0;
- (id)headImg;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setAntiSpamTicket:(id)a0;
- (id)antiSpamTicket;
- (void)setUserName:(id)a0;
- (id)userName;
- (void)setContent:(id)a0;
- (id)content;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setActionCode:(unsigned int)a0;
- (unsigned int)actionCode;
- (void)setShareUrl:(id)a0;
- (id)shareUrl;
- (void)setRespUrl:(id)a0;
- (id)respUrl;
- (void)setRequestId:(unsigned int)a0;
- (unsigned int)requestId;

@end
