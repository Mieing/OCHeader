@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveSuspiciousVerifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *verificationId;

+ (void)initialize;

@end
