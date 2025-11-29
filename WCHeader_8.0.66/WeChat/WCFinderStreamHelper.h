@interface WCFinderStreamHelper : NSObject

- (id)timelineFirstPageDataWithRedDotCtrlInfo:(id)a0 tabType:(long long)a1 isPrefetchScene:(BOOL)a2 redDotRequestBlock:(id /* block */)a3;
- (void)preloadFinderTimelineFirstFeed;
- (void)preloadFinderTimelineFirstUnreadFeed;
- (id)lastExposeFeedWithTabType:(long long)a0;
- (id)prefetchDataWithTabType:(long long)a0;
- (id)getCommentDetailDataWithCtrlInfo:(id)a0 tabType:(long long)a1 isPrefetchScene:(BOOL)a2 finishBlock:(id /* block */)a3;
- (id)unreadDataWithTabType:(long long)a0;
- (id)lastFeedCacheDataWithTabType:(long long)a0;
- (id)readDataWithTabType:(long long)a0;

@end
