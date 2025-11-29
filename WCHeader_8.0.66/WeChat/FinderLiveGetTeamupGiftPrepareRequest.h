@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetTeamupGiftPrepareRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *reddotId;

+ (void)initialize;

@end
