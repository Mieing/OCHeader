@class BaseRequest, FinderBaseRequest, NSString;

@interface FetchFinderMemberStatusRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int needSubscriptionType;

+ (void)initialize;

@end
