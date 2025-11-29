@class LVMainFeedViewController;

@interface LVCacheManager : NSObject

@property (retain, nonatomic) LVMainFeedViewController *currentVC;

- (id)init;
- (void)dealloc;
- (void)addPageInstanceToCache:(id)a0;
- (void)removePageInstanceFromCache;
- (id)getPageInstanceFromCache;
- (void)onSurviveEnd;
- (void)receiveMemoryWarning:(id)a0;
- (void).cxx_destruct;

@end
