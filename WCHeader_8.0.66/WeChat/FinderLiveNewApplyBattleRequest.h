@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderLiveNewApplyBattleRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *referMicSessionId;
@property (nonatomic) unsigned int battleMode;
@property (retain, nonatomic) NSMutableArray *battleTeams;
@property (retain, nonatomic) NSString *vroomId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int indicatorType;
@property (retain, nonatomic) NSData *indicatorParameter;
@property (nonatomic) unsigned int battleScope;
@property (nonatomic) unsigned int battleDuration;
@property (nonatomic) unsigned int battleLayout;

+ (void)initialize;

@end
