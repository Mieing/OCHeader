@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveAnchorSendPromoteInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long promoteInfoId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int requestScene;

+ (void)initialize;

@end
