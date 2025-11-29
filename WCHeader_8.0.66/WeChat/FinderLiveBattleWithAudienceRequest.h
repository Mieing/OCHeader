@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderLiveBattleWithAudienceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *battleId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int battleMode;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int battleScope;
@property (retain, nonatomic) NSMutableArray *battleTeams;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int indicatorType;
@property (retain, nonatomic) NSData *indicatorParameter;
@property (nonatomic) unsigned int battleDuration;
@property (retain, nonatomic) NSString *lastBattleId;

+ (void)initialize;

@end
