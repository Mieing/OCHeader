@class BaseRequest, FinderBaseRequest;

@interface FinderLiveClearAliasRoleRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long showTs;

+ (void)initialize;

@end
