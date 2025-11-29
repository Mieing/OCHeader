@class BaseRequest, SKBuiltinString_t, NSString, SKBuiltinBuffer_t;

@interface GetA8KeyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) SKBuiltinBuffer_t *a2Key;
@property (retain, nonatomic) SKBuiltinString_t *appId;
@property (retain, nonatomic) SKBuiltinString_t *scope;
@property (retain, nonatomic) SKBuiltinString_t *state;
@property (retain, nonatomic) SKBuiltinString_t *reqUrl;
@property (retain, nonatomic) NSString *friendUserName;
@property (nonatomic) unsigned int friendQq;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) SKBuiltinBuffer_t *a2KeyNew;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int fontScale;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *netType;
@property (nonatomic) unsigned int codeType;
@property (nonatomic) unsigned int codeVersion;
@property (nonatomic) unsigned int requestId;
@property (retain, nonatomic) NSString *functionId;
@property (nonatomic) unsigned int walletRegion;
@property (retain, nonatomic) SKBuiltinBuffer_t *cookie;
@property (retain, nonatomic) NSString *outerUrl;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSString *appTitle;
@property (retain, nonatomic) NSString *appDesc;
@property (retain, nonatomic) NSString *msgUserName;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *wxaPathWithQuery;
@property (nonatomic) unsigned int contentType;
@property (nonatomic) unsigned int appMsgInnerType;
@property (retain, nonatomic) SKBuiltinBuffer_t *spamExtBuf;
@property (retain, nonatomic) NSString *referrer;
@property (retain, nonatomic) SKBuiltinBuffer_t *sceneNoteBuf;

+ (void)initialize;

@end
