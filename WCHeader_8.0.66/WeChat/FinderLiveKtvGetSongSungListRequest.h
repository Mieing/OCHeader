@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveKtvGetSongSungListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL onlyMysong;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL getPlayCountInfo;
@property (nonatomic) unsigned long long songListVersion;
@property (retain, nonatomic) NSString *targetSongUniqueId;
@property (nonatomic) unsigned int order;

+ (void)initialize;

@end
