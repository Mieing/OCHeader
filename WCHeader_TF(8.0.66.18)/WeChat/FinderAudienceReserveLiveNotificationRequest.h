@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderAudienceReserveLiveNotificationRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned int scene;
@property (nonatomic) int opType;
@property (nonatomic) unsigned int innerScene;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *myFinderUsername;

+ (void)initialize;

@end
