@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveBriefMusicInfo;

@interface FinderLiveAdjustBackgroundMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int bizScene;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int curVolume;
@property (nonatomic) unsigned int curSongId;
@property (nonatomic) unsigned int curSongRatio;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) FinderLiveBriefMusicInfo *newCurBriefMusicInfo;

+ (void)initialize;

@end
