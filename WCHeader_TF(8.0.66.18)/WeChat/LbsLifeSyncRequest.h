@class NSData, NSString, FinderBaseRequest, SKBuiltinBuffer_t, BaseRequest, FinderSyncRequest_Coordinate, LbsLifeInfo, NSMutableArray, LbsLifeSyncClientStatus, EntranceExposeContent;

@interface LbsLifeSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) LbsLifeInfo *lbsLifeInfo;
@property (retain, nonatomic) NSData *clientAiInfo;
@property (retain, nonatomic) LbsLifeSyncClientStatus *clientStatus;
@property (retain, nonatomic) NSMutableArray *multiFinderUsername;
@property (retain, nonatomic) FinderSyncRequest_Coordinate *coordinate;
@property (retain, nonatomic) EntranceExposeContent *entranceExposeContent;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *reliableNotifyBuff;

+ (void)initialize;

@end
