@class IESGCPApi;

@interface AWEGCPStrategyAPI : NSObject

@property (retain, nonatomic) IESGCPApi *api;

- (void)requestImpressionReportWithItemIds:(id)a0 contentType:(int)a1 channelId:(id)a2 completion:(id /* block */)a3;
- (void)requestStrategyListWithGameId:(id)a0 tabId:(id)a1 lastVideoOffset:(long long)a2 lastLiveOffset:(long long)a3 count:(long long)a4 isChoicenessContent:(BOOL)a5 completion:(id /* block */)a6;
- (id)videoItemWithString:(id)a0;
- (id)liveItem:(id)a0;
- (void).cxx_destruct;

@end
