@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetConcertTicketInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned int opScene;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL needPageItem;

+ (void)initialize;

@end
