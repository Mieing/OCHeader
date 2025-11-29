@class BaseRequest, NSString, FinderBaseRequest;

@interface FinderDelFeedRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *posterUsername;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
