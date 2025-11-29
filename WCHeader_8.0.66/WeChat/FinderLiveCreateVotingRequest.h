@class BaseRequest, NSString, FinderBaseRequest, FinderLiveVotingConfig;

@interface FinderLiveCreateVotingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) FinderLiveVotingConfig *config;
@property (nonatomic) unsigned int opType;

+ (void)initialize;

@end
