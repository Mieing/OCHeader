@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveKtvGetSongPlayInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *uniqueId;

+ (void)initialize;

@end
