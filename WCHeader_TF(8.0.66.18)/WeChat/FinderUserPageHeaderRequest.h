@class FinderUserPageReqPreload, BaseRequest, NSString, FinderBaseRequest;

@interface FinderUserPageHeaderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int needFansCount;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) NSString *bizUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *viewerFinderUsername;
@property (retain, nonatomic) NSString *liveNoticeId;
@property (nonatomic) unsigned long long refLiveObjectId;
@property (retain, nonatomic) FinderUserPageReqPreload *preload;
@property (nonatomic) unsigned int authorScene;
@property (retain, nonatomic) NSString *exportUsername;

+ (void)initialize;

@end
