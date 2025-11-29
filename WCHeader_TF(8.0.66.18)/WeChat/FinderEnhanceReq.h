@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray, FinderClientStatus;

@interface FinderEnhanceReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int displayTabType;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSMutableArray *stats;
@property (retain, nonatomic) NSMutableArray *markUnreadObjectList;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned int listenEventType;
@property (nonatomic) unsigned int enhanceStreamType;
@property (nonatomic) unsigned long long refCommentId;

+ (void)initialize;

@end
