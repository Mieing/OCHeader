@class MMFinderLiveKTVSongItem, WCFinderDataItem, NSData;
@protocol MMLiveUniqueTaskId;

@interface WCFinderLiveKtvGetSongPlayInfoCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveKTVSongItem *songItem;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (nonatomic) long long liveScene;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (retain, nonatomic) id<MMLiveUniqueTaskId> uniqueTaskId;

- (id)initWithUniqueTaskId:(id)a0 songItem:(id)a1 liveScene:(long long)a2 liveCookies:(id)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5;
- (void)createRequest;
- (void)createRequestWithoutLiveTask;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
