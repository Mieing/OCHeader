@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetLiveRewardGiftListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *selfFinderUsername;
@property (nonatomic) unsigned int liveScene;
@property (nonatomic) unsigned int pullScene;

+ (void)initialize;

@end
