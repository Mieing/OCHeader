@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetFanClubMembersRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int memberType;
@property (nonatomic) unsigned int sortType;

+ (void)initialize;

@end
