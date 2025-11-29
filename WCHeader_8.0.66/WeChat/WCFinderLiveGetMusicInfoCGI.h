@class NSData, NSMutableArray, MMFinderLiveTaskId;

@interface WCFinderLiveGetMusicInfoCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSMutableArray *songIdList;
@property (retain, nonatomic) NSMutableArray *briefMusicInfos;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 songIdList:(id)a1 briefMusicInfos:(id)a2 liveCookies:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)convertMusicItemList:(id)a0;
- (id)finderLiveTask;
- (void).cxx_destruct;

@end
