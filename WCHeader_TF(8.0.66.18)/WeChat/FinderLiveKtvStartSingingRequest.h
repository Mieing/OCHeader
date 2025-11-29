@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveKtvStartSingingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL needSdkInfo;
@property (retain, nonatomic) NSString *songUniqueId;

+ (void)initialize;

@end
