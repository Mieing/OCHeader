@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveAudienceCheckFanClubRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
