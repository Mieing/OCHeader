@class JsApiSourceInfo, NSString, FinderAdBaseRequest, NSData, FinderPageBaseInfo, ClientContextInfo, NSMutableArray;

@interface FinderBaseRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int userver;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *extSpamInfo;
@property (nonatomic) unsigned int exptFlag;
@property (retain, nonatomic) ClientContextInfo *ctxInfo;
@property (nonatomic) unsigned long long requestId;
@property (nonatomic) unsigned int liveIdentity;
@property (retain, nonatomic) NSMutableArray *objectBaseInfos;
@property (nonatomic) unsigned int clientFlag;
@property (retain, nonatomic) FinderAdBaseRequest *adBasereq;
@property (retain, nonatomic) NSData *exptBuffer;
@property (nonatomic) unsigned long long debugFlag;
@property (retain, nonatomic) FinderPageBaseInfo *lastPageInfo;
@property (retain, nonatomic) NSMutableArray *supportedCodingFormatList;
@property (retain, nonatomic) JsApiSourceInfo *jsApiInfo;
@property (retain, nonatomic) NSString *gmsgId;

+ (void)initialize;

- (void)setGmsgId:(id)a0;
- (id)gmsgId;
- (void)setJsApiInfo:(id)a0;
- (id)jsApiInfo;
- (void)setSupportedCodingFormatList:(id)a0;
- (id)supportedCodingFormatList;
- (void)setLastPageInfo:(id)a0;
- (id)lastPageInfo;
- (void)setDebugFlag:(unsigned long long)a0;
- (unsigned long long)debugFlag;
- (void)setExptBuffer:(id)a0;
- (id)exptBuffer;
- (void)setAdBasereq:(id)a0;
- (id)adBasereq;
- (void)setClientFlag:(unsigned int)a0;
- (unsigned int)clientFlag;
- (void)setObjectBaseInfos:(id)a0;
- (id)objectBaseInfos;
- (void)setLiveIdentity:(unsigned int)a0;
- (unsigned int)liveIdentity;
- (void)setRequestId:(unsigned long long)a0;
- (unsigned long long)requestId;
- (void)setCtxInfo:(id)a0;
- (id)ctxInfo;
- (void)setExptFlag:(unsigned int)a0;
- (unsigned int)exptFlag;
- (void)setExtSpamInfo:(id)a0;
- (id)extSpamInfo;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setUserver:(unsigned int)a0;
- (unsigned int)userver;

@end
