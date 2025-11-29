@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGenPersonalMsgSessionInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int sourceType;
@property (nonatomic) unsigned int liveIdentity;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
