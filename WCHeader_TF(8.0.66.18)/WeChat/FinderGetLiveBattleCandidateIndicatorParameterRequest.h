@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetLiveBattleCandidateIndicatorParameterRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int indicatorType;
@property (retain, nonatomic) NSString *micVroomId;
@property (nonatomic) unsigned int battleScene;

+ (void)initialize;

@end
