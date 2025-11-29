@class FinderUserPageReqPreload, BaseRequest, NSString, FinderBaseRequest;

@interface FinderHomePageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long refLiveObjectId;
@property (retain, nonatomic) FinderUserPageReqPreload *preload;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
