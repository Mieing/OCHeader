@class NSString;
@protocol MegaVideoPageMonitor;

@interface MegaVideoPageMonitorHelper : NSObject

@property (class, readonly, nonatomic) NSString *CgiMainFeedList;
@property (class, readonly, nonatomic) NSString *CgiRelatedList;
@property (class, readonly, nonatomic) NSString *ViewIdMainFeed;
@property (class, readonly, nonatomic) NSString *ViewIdRelatedFeed;
@property (class, readonly, nonatomic) NSString *ViewIdPlayer;

@property (readonly, nonatomic) id<MegaVideoPageMonitor> pageMonitor;
@property (readonly, nonatomic) BOOL hasInit;
@property (readonly, nonatomic) BOOL hasEnter;

- (id)init;
- (void)initMonitorWithSessionKey:(id)a0 startTime:(long long)a1 pageId:(long long)a2 pageType:(long long)a3 enterType:(long long)a4;
- (void)didChangePageState:(long long)a0;
- (void)onExit;
- (void)onResume;
- (void)onPause;
- (void)onAction:(long long)a0;
- (void)onViewExposeWithViewId:(id)a0 index:(long long)a1;
- (void)onViewClickWithViewId:(id)a0;
- (void)onViewFocusWithViewId:(id)a0;
- (void)onViewAutoPlayWithViewId:(id)a0;
- (void)useCacheWithCgiName:(id)a0;
- (void)onCgiRequestWithCgiName:(id)a0 requestType:(long long)a1;
- (void)onCgiBackWithCgiName:(id)a0 success:(BOOL)a1 cgiTimeCost:(long long)a2 requestType:(long long)a3;
- (void).cxx_destruct;

@end
