@class NSData, NSString, FinderBaseRequest, SKBuiltinBuffer_t, FinderCommonReddotExpose, BaseRequest, FinderSyncClientInfo, FinderSyncClientStatus, NSMutableArray, EntranceExposeContent;

@interface FinderCommonReddotSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderCommonReddotExpose *reddotExpose;
@property (retain, nonatomic) NSData *clientAiInfo;
@property (retain, nonatomic) FinderSyncClientStatus *clientStatus;
@property (retain, nonatomic) NSMutableArray *multiFinderUsername;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) EntranceExposeContent *entranceExposeContent;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *reliableNotifyBuff;
@property (retain, nonatomic) FinderSyncClientInfo *clientInfo;
@property (nonatomic) unsigned int lbsCacheTime;
@property (retain, nonatomic) NSData *clientCustomInfo;

+ (void)initialize;

- (void)setClientCustomInfo:(id)a0;
- (id)clientCustomInfo;
- (void)setLbsCacheTime:(unsigned int)a0;
- (unsigned int)lbsCacheTime;
- (void)setClientInfo:(id)a0;
- (id)clientInfo;
- (void)setReliableNotifyBuff:(id)a0;
- (id)reliableNotifyBuff;
- (void)setLastBuffer:(id)a0;
- (id)lastBuffer;
- (void)setEntranceExposeContent:(id)a0;
- (id)entranceExposeContent;
- (void)setLatitude:(float)a0;
- (float)latitude;
- (void)setLongitude:(float)a0;
- (float)longitude;
- (void)setMultiFinderUsername:(id)a0;
- (id)multiFinderUsername;
- (void)setClientStatus:(id)a0;
- (id)clientStatus;
- (void)setClientAiInfo:(id)a0;
- (id)clientAiInfo;
- (void)setReddotExpose:(id)a0;
- (id)reddotExpose;
- (void)setFinderUsername:(id)a0;
- (id)finderUsername;
- (void)setKeyBuf:(id)a0;
- (id)keyBuf;
- (void)setFinderBasereq:(id)a0;
- (id)finderBasereq;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
