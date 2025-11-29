@class FinderLiveAppMsg, BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveContact;

@interface FinderLivePostPersonalMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) FinderLiveAppMsg *msg;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) FinderLiveContact *toContact;

+ (void)initialize;

@end
