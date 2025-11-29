@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveAudienceOpFanClubRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int consumeType;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSData *subscriptionExtInfo;

+ (void)initialize;

@end
