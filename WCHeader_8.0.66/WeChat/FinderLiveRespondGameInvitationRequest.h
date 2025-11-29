@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveRespondGameInvitationRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *invitationId;

+ (void)initialize;

@end
