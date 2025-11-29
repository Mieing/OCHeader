@class NSMutableDictionary, IESVSVideoHistoryAPI;

@interface IESVSVideoHistoryServiceImp : NSObject <IESVSVideoHistoryService>

@property (nonatomic) long long pingTime;
@property (retain, nonatomic) IESVSVideoHistoryAPI *historyApi;
@property (retain, nonatomic) NSMutableDictionary *history;
@property (retain, nonatomic) NSMutableDictionary *recordTime;

+ (id)sharedInstance;

- (void)appWillTerminateNotification;
- (double)getVideoHistoryByEpisodeID:(long long)a0 OrEpisode:(id)a1;
- (double)getVideoDurationByEpisodeID:(long long)a0;
- (void)getVideoHistoryByEpisodeIDs:(id)a0 complete:(id /* block */)a1;
- (void)recordLocalVideoHistory:(double)a0 ByEpisode:(long long)a1 isPing:(BOOL)a2;
- (void)recordLocalVideoDuration:(double)a0 ByEpisode:(long long)a1;
- (void)statsVideoPlay:(long long)a0;
- (void)addTerminateObserver;
- (void)saveHistoryToKVStore;
- (void).cxx_destruct;

@end
