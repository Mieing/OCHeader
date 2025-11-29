@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveModifyBattleRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *battleId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long modifyFlag;
@property (nonatomic) unsigned int battleLayout;

+ (void)initialize;

@end
