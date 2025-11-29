@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderLiveActivityInstanceCancelRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSMutableArray *taskId;

+ (void)initialize;

@end
