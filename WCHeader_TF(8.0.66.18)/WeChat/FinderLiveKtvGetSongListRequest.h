@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveKtvGetSongListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL onlyMysong;
@property (nonatomic) unsigned int requestCount;
@property (nonatomic) BOOL getPlayCountInfo;
@property (nonatomic) unsigned long long songListVersion;

+ (void)initialize;

@end
