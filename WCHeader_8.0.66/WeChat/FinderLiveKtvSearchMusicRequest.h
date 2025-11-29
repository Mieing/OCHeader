@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveKtvSearchMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *searchKey;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long songListVersion;

+ (void)initialize;

@end
