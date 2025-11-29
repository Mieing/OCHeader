@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface IphoneRegRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *sound;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *voipSound;
@property (nonatomic) unsigned int tokenCert;
@property (nonatomic) unsigned int tokenEnv;
@property (nonatomic) unsigned int tokenScene;
@property (nonatomic) unsigned int entrance;
@property (nonatomic) unsigned int clientKeyTag;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientPubKey;

+ (void)initialize;

- (void)setClientPubKey:(id)a0;
- (id)clientPubKey;
- (void)setClientKeyTag:(unsigned int)a0;
- (unsigned int)clientKeyTag;
- (void)setEntrance:(unsigned int)a0;
- (unsigned int)entrance;
- (void)setTokenScene:(unsigned int)a0;
- (unsigned int)tokenScene;
- (void)setTokenEnv:(unsigned int)a0;
- (unsigned int)tokenEnv;
- (void)setTokenCert:(unsigned int)a0;
- (unsigned int)tokenCert;
- (void)setVoipSound:(id)a0;
- (id)voipSound;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (void)setSound:(id)a0;
- (id)sound;
- (void)setToken:(id)a0;
- (id)token;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
