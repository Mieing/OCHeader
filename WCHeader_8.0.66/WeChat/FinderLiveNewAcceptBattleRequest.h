@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveNewAcceptBattleRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *referMicSessionId;
@property (retain, nonatomic) NSString *referBattleId;
@property (retain, nonatomic) NSString *vroomId;

+ (void)initialize;

@end
