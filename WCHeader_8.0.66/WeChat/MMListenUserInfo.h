@class NSString, NSData;

@interface MMListenUserInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uin;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImg;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *authIconUrl;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int authIconType;
@property (nonatomic) BOOL isMine;
@property (retain, nonatomic) NSString *hashusername;
@property (retain, nonatomic) NSString *authProfession;
@property (retain, nonatomic) NSString *finderEncryptedWxUsername;
@property (retain, nonatomic) NSData *finderEncryptedValidationBuffer;

+ (void)initialize;

- (void)setFinderEncryptedValidationBuffer:(id)a0;
- (id)finderEncryptedValidationBuffer;
- (void)setFinderEncryptedWxUsername:(id)a0;
- (id)finderEncryptedWxUsername;
- (void)setAuthProfession:(id)a0;
- (id)authProfession;
- (void)setHashusername:(id)a0;
- (id)hashusername;
- (void)setIsMine:(BOOL)a0;
- (BOOL)isMine;
- (void)setAuthIconType:(int)a0;
- (int)authIconType;
- (void)setUrl:(id)a0;
- (id)url;
- (void)setTag:(id)a0;
- (id)tag;
- (void)setAuthIconUrl:(id)a0;
- (id)authIconUrl;
- (void)setType:(int)a0;
- (int)type;
- (void)setHeadImg:(id)a0;
- (id)headImg;
- (void)setNickname:(id)a0;
- (id)nickname;
- (void)setUsername:(id)a0;
- (id)username;
- (void)setUin:(unsigned long long)a0;
- (unsigned long long)uin;

@end
