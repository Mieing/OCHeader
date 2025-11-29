@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveSwitchIdentityRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int targetAliasRole;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long showTs;

+ (void)initialize;

@end
