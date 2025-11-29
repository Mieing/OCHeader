@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray, FinderLiveClientStatus;

@interface FinderLiveSyncExtraInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderusername;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSMutableArray *syncReqList;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSData *uxInfo;
@property (retain, nonatomic) NSString *ecSource;
@property (retain, nonatomic) FinderLiveClientStatus *clientStatus;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
