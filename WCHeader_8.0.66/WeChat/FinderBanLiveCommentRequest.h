@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderBanLiveCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *audienceUsername;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int liveScene;

+ (void)initialize;

@end
