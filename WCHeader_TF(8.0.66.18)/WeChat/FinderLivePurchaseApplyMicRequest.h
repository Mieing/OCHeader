@class FinderLiveAppMsg, BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLivePurchaseApplyMicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) FinderLiveAppMsg *msg;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int markupWecoinCount;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
