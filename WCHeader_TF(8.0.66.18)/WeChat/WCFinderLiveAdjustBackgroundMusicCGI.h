@class NSString, NSData, FinderLiveBriefMusicInfo;

@interface WCFinderLiveAdjustBackgroundMusicCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int bizScene;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int curVolume;
@property (nonatomic) unsigned int curSongId;
@property (nonatomic) unsigned int curSongRatio;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) FinderLiveBriefMusicInfo *song;

- (id)initWithFinderUsername:(id)a0 bizScene:(unsigned int)a1 liveCookies:(id)a2 liveId:(unsigned long long)a3 objectId:(unsigned long long)a4 curVolume:(unsigned int)a5 curSongId:(unsigned int)a6 curSongRatio:(unsigned int)a7 action:(int)a8 song:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
