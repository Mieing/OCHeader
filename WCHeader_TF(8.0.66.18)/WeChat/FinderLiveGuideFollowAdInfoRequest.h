@class BaseRequest, FinderBaseRequest;

@interface FinderLiveGuideFollowAdInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long finderUin;

+ (void)initialize;

@end
