@class BaseRequest, NSString, FinderLiveBackgroundMusicInfo, FinderBaseRequest, NSData;

@interface FinderLiveModBackgroundMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderLiveBackgroundMusicInfo *bgMusicInfo;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
