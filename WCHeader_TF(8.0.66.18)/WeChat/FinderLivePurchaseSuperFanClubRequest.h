@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLivePurchaseSuperFanClubRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int consumeType;
@property (retain, nonatomic) NSData *subscriptionExtInfo;

+ (void)initialize;

@end
