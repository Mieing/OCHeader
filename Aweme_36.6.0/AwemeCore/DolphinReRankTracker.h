@interface DolphinReRankTracker : NSObject

+ (void)trackAdReRankWithEvent:(id)a0 status:(id)a1 message:(id)a2 currentFeedList:(id)a3 returnFeedList:(id)a4 currentIndex:(long long)a5 extParamsDict:(id)a6 scene:(id)a7 appId:(id)a8;
+ (id)makeFeedListStrFeedList:(id)a0 isLimitCount:(BOOL)a1;

@end
