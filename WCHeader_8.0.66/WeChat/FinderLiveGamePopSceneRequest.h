@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveGamePopSceneRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *gameAppid;

+ (void)initialize;

@end
