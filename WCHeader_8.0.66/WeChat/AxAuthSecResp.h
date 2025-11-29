@class NSString, SKBuiltinBuffer_t, HostList;

@interface AxAuthSecResp : WXPBGeneratedMessage

@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) SKBuiltinBuffer_t *axTicket;
@property (retain, nonatomic) HostList *axHostList;
@property (nonatomic) unsigned int axAuthCgiId;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomKey;
@property (retain, nonatomic) NSString *axAuthUri;
@property (nonatomic) unsigned int axAlgo;

+ (void)initialize;

- (void)setAxAlgo:(unsigned int)a0;
- (unsigned int)axAlgo;
- (void)setAxAuthUri:(id)a0;
- (id)axAuthUri;
- (void)setRandomKey:(id)a0;
- (id)randomKey;
- (void)setAxAuthCgiId:(unsigned int)a0;
- (unsigned int)axAuthCgiId;
- (void)setAxHostList:(id)a0;
- (id)axHostList;
- (void)setAxTicket:(id)a0;
- (id)axTicket;
- (void)setBusinessType:(unsigned int)a0;
- (unsigned int)businessType;

@end
